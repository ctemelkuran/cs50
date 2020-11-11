function blink()
//ask for h5 element
{
    let h5 = document.querySelector('h5');
    if (h5.style.visibility === 'hidden')
    {
        h5.style.visibility = 'visible';
    }
    else
    {
        h5.style.visibility = 'hidden'
    }
}
// Blink every X ms
window.setInterval(blink, 500);