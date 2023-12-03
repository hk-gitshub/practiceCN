const emojiDetails=[
    {description:"Smile Face with Emojis", emoji: "😎"},
    {description:"thumbs up", emoji: "👍"},
    {description:"blush", emoji:"😊",},
    {description:"heart eyes",emoji:"😍"},
    {description:"laugh", emoji: "😆"},
    {description:"winking face", emoji: "😉"}
];

let currentEmoji=0;
let score=0;

const emj=document.getElementById("guessEmoji");
const inp=document.getElementById("description");
const ans=document.getElementById("answer");
const scr=document.getElementById("score");

const displayEmoji=()=>{
    emj.textContent=emojiDetails[currentEmoji].emoji;
}

const compareGuess= ()=> {
    const inpVal=inp.value.trim().toLowerCase();
    const desc=emojiDetails[currentEmoji].description.trim().toLowerCase();
    console.log(inpVal);
    console.log(description);
    if(inpVal===desc){
        score++;
        ans.textContent="correct answer !!";
    }else{
        ans.textContent="wrong answer !!";
    }
    scr.textContent=`Score : ${score}`;
    inp.value="";
    inp.focus();
    nextEmoji();
}

const nextEmoji=()=>{
    // ans.textContent="";
    currentEmoji++;
    if (currentEmoji>=emojiDetails.length){
        currentEmoji=0;
        score=0;
        scr.textContent=`Score : ${score}`;
        
    }
    displayEmoji();
}

document.getElementById("description").addEventListener("keydown", (event)=>{
    if(event.key==="Enter"){
    compareGuess();
    }
});

document.addEventListener("DOMContentLoaded", ()=>{
    displayEmoji();
});



