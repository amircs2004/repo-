const containerEL = document.querySelector(".container")
const mouseEventEL = document.getElementById("mouseEvent")

window.addEventListener("mousemove",(event)=>{
    containerEL.innerHTML = `
       <div class="mouseEvent" id="mouseEvent">
        ${event.clientX}
        <h4>Mouse X prosition(px)</h4>
    </div>
   <div class="mouseEvent" id="mouseEvent">
   ${event.clientY}
    <h4>Mouse Y prosition (px)</h4>
   </div>
    `

})