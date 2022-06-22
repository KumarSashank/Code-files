'use strict';

const fs = require('fs');


process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
  inputString += inputStdin;
});

process.stdin.on('end', function() {
  inputString = inputString.split('\n');

  main();
});

function readLine() {
  return inputString[currentLine++];
}

function makeInputVerifier(minimum, maximum) {
  // write your code here
  if(input<min)
  {
      out="Input is less than minimum value";
  }
  else if(input>=min && input<=max)
  {
      out="Input is in range";
  }
  else
  {
      out="Input is more than maximum value"
  }
  return out;
  
}
function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const min = parseInt(readLine().trim());
  const max = parseInt(readLine().trim());
    
  const input = parseInt(readLine().trim());
  let out="Hola"
  if(input<min)
  {
     out="Input is less than minimum value";
  }
  else if(input>=min && input<=max)
  {
      out="Input is in range";
  }
  else
  {
      out="Input is more than maximum value"
  }

  ws.write(`${out}\n`);
  ws.end();
}