const mycheckbox = document.getElementById("mycheckbox");
const visabtn = document.getElementById("visabtn");
const mastercardbtn = document.getElementById("mastercardbtn");
//const paypalbtn = document.getElementById("paypalbtn");
const mysubmit = document.getElementById("mysubmit");
const subresult = document.getElementById("subresult");
const paypalbtn = document.getElementById("paymentresult");

mysubmit.onclick = function () {
   if (mycheckbox.checked) {
    subresult.textContent = `you are subscribed`;
   }
   else {
     subresult.textContent = `you are not subscribed`;
   }
}