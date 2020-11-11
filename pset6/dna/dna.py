import sys
import csv

def main():
    if len(sys.argv) !=3:
        sys.exit("Usage: python dna.py data.csv sequence.txt")

#First I open the 1st command line argument (data.csv)
    database = open(sys.argv[1])
    #Then, I read the data inside the csv file with csv.DictReader
    data = csv.DictReader(database)
    #Opened the sequence text file.
    with open(sys.argv[2]) as file:
        sequence = file.read()
    #Get the counts for each STR (column titles in csv files after "name"),
    counts = {}
    for subseq_str in data.fieldnames[1:]:
        counts[subseq_str] = longestmatch(sequence, subseq_str)

        #check each row in data for a matchıng DNA profile
    for row in data:
        if all(counts[subseq_str] == int(row[subseq_str]) for subseq_str in counts):
            print(row["name"])
            database.close()
            return
    print("No match")
    database.close()

def longestmatch(sequence, subseq_str):
    longest = 0
    length = len(subseq_str)
    for i in range(len(sequence)):
        count = 0
        while True:
            start = i + length * count
            end = start + length
            if sequence[start:end] == subseq_str:
                count += 1
            else:
                break
        longest = max(longest, count)
    return longest

main()
