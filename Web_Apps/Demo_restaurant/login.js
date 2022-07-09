// function submitform() {
//     var form = document.getElementById("login");
//     var mail = document.getElementById("email").value;
//     var pass = document.getElementById("password").value;
//     if(mail=="admin@gmail.com" && pass=="admin"){
//         alert("Login Successful");
//         window.location.replace("/Users/kumarsashank/Desktop/Code files/Web_Apps/Demo_restaurant/index.html");
//         console.log("Login Successful");
//     }
//     else{
//         // alert("Login Failed");
//         window.location="http://programminghead.com";
//     }
// };

function go() {
    window.location.replace("https://stackoverflow.com/questions/8898998/window-location-replace-not-working-to-redirect-browser");
}

function submitform() {
//   e.preventDefault();
  var password = getElementVal("password");
  var emailid = getElementVal("email");

  check(password, emailid);
  console.log(password, emailid);

  //   enable alert
  document.querySelector(".alert").style.display = "block";

  //   remove the alert
  setTimeout(() => {
    document.querySelector(".alert").style.display = "none";
  }, 3000);

  //   reset the form
  document.getElementById("login").reset();
}

const check = (password, emailid) => {
  if (password =="admin" && emailid =="admin@gmail.com") {
    window.location.replace("https://stackoverflow.com/questions/8898998/window-location-replace-not-working-to-redirect-browser");

    alert("Login Successful");
    console.log("Login Successful");
    //sleep for 2 seconds
    sleep(2000);
    window.location.replace("https://stackoverflow.com/questions/8898998/window-location-replace-not-working-to-redirect-browser");
    
  }
  else if(password =="admin" && emailid =="user@gmail.com"){
    alert("Login Failed");
    console.log("Login Failed");
    window.location.replace("https://stackoverflow.com/questions/8898998/window-location-replace-not-working-to-redirect-browser");
  }
  else{
    alert("Login Failed");
    console.log("Login Failed");
    window.location.replace("https://stackoverflow.com/questions/8898998/window-location-replace-not-working-to-redirect-browser");
  }
};

const getElementVal = (id) => {
  return document.getElementById(id).value;
};
