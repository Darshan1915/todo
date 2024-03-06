const accordians = document.querySelectorAll('.accordian')

accordians.forEach( accordian =>{
    const icon = accordians.querySelector('.icon')
    const answer = accordians.querySelector('.answer')

    accordian.addEventListener('click',()=>{
        icon.classlist.toggle('active')
        answer.classlist.toggle('active')
    })
})
