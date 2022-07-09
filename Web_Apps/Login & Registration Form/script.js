const container = document.querySelector(".container"),
      pwShowHide = document.querySelectorAll(".showHidePw"),
      pwFields = document.querySelectorAll(".password"),
      signUp = document.querySelector(".signup-link"),
      login = document.querySelector(".login-link");

    //   js code to show/hide password and change icon
    pwShowHide.forEach(eyeIcon =>{
        eyeIcon.addEventListener("click", ()=>{
            pwFields.forEach(pwField =>{
                if(pwField.type ==="password"){
                    pwField.type = "text";

                    pwShowHide.forEach(icon =>{
                        icon.classList.replace("uil-eye-slash", "uil-eye");
                    })
                }else{
                    pwField.type = "password";

                    pwShowHide.forEach(icon =>{
                        icon.classList.replace("uil-eye", "uil-eye-slash");
                    })
                }
            }) 
        })
    })

    // js code to appear signup and login form
    signUp.addEventListener("click", ( )=>{
        container.classList.add("active");
    });
    login.addEventListener("click", ( )=>{
        container.classList.remove("active");
    });

function submitform(){
    var mail=document.getElementById("mail").value;
    var password=document.getElementById("pswd").value;
    if(mail==""){
        alert("Please enter your email");
        return false;
    }
    if(password==""){    
        alert("Please enter your password");
        return false;
    }
    if(mail=="admin@gmail.com" && password=="admin"){
        alert("Login Successful");
        window.location.replace("https://www.youtube.com");
        return true;
    }
    else if(mail=="admin@gmail.com" && password=="manager"){
        window.location.replace("https://www.w3schools.com/CPP/cpp_syntax.asp");
        return true;
    }
    else{
        alert("Invalid email or password");
        return false;
    }
}