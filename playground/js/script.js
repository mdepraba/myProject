const body = document.querySelector('body'),
sidebar = body.querySelector('nav'),
toggle = body.querySelector(".toggle"),
searchBtn = body.querySelector(".search-box"),
modeSwitch = body.querySelector(".toggle-switch"),
modeText = body.querySelector(".mode-text");

toggle.addEventListener("click" , () =>{
    sidebar.classList.toggle("closed");
})

searchBtn.addEventListener("click" , () =>{
    sidebar.classList.remove("closed");
})

modeSwitch.addEventListener("click" , () =>{
    body.classList.toggle("dark");
    if(body.classList.contains("dark")){
        modeText.innerText = "Light mode";
    }else{
        modeText.innerText = "Dark mode";
    }
});

// sidebar on active
$(".menu-links a").on("click", function() {
    $(".menu-links").find(".active").removeClass("active");
    $(this).parent().addClass("active");
});