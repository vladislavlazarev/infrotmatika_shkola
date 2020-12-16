 var numbers = [2,3,4,5,44,12];

    function errase() {
      document.getElementById('#second-input').value = " ";
      document.getElementById('#first-input').value = " ";
    }

    function showArray() {
      document.getElementById('#first-input').value = numbers;
    }

    function showArray() {
      document.getElementById('#first-input').value = numbers;
    }

    function maxElem(array) {
      var max = 0;
      for (i=0; i < numbers.length; i++) {
        if (numbers[i] > max) max = numbers[i];
      }
      document.getElementById('#second-input').value = max;
    }

    function deleteLast() {
      numbers.length--;
      console.log(numbers);
    }

    function Factorial() {
      var fac = 1;
      var number;
      number =  document.getElementById('#9-input').value;
      for (i = 2; i<= number; i++) {
        fac *= i;
      }
      document.getElementById('#9-input').value = fac;
    }

    function soversh() {
      var fac = 0;
      var number = document.getElementById('#16-input').value;
      for (i = 1; i< number; i++) {
          if (number%i == 0) fac+= i;
      }
      if (number == fac) document.getElementById('#17-input').value = "Совершенное";
      else document.getElementById('#17-input').value = "НЕ совершенное";
      
    }

    function sumdel(n) {
     var sum=0;
     for ( i=1; i<=n/2; i++)
     if (n%i==0) sum+=i;
     return sum;
    }


    function druz() {
      var m = document.getElementById('#21-input').value;
      var n = document.getElementById('#22-input').value;
      var s = "";
      for(var j=m; j<=n; j++) {
         k=sumdel(j);
         if(k>=m && k<=n)
             if(sumdel(k)==j)  s+=j+" и " +k+"\n";
         }  
      document.getElementById('#25-input').value = s;
    }

    function fib() {
      var f1 = 1;
      var f2 = 1;
      var f3 = 1;
      var n = document.getElementById('#18-input').value;
      while (n > f3) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
      }
      if (f3 == n) document.getElementById('#19-input').value = "Принадлежит";
      else document.getElementById('#19-input').value = "НЕ принадлежит";
      
    }


    function summ() {
      var f = 1;
      prevF = 1;
      sum = 1;
      var number =  document.getElementById('#14-input').value;
      var x =  document.getElementById('#13-input').value;
      for (i = 1; i<= number; i++) {
        f = prevF*x/i;
        console.log(f);
        sum += f;
        prevF = f;
      }
      document.getElementById('#15-input').value = sum;
    }

    function gcd() {
      var number1 = document.getElementById('#10-input').value;
      var number2 = document.getElementById('#11-input').value;
      if (number1 > number2) {
          for (i = number2; i >= 2; i--) {
          if (number1%i == 0 && number2%i == 0) { 
            document.getElementById('#12-input').value = i;
            break;
            } 
        }
      }
      if (number2 > number1) {
          for (i = number1; i >= 2; i--) {
          if (number1%i == 0 && number2%i == 0) { 
            document.getElementById('#12-input').value = i;
            break;
            } 
        }
      }
      if (document.getElementById('#12-input').value == "") document.getElementById('#12-input').value = "Нету";
    }

    function change() {
      for (i=0; i < numbers.length; i++) {
        if (numbers[i] == document.getElementById('#third-input').value) {
          numbers[i] = document.getElementById('#fourth-input').value;
          break;
        }
      }
    }
    function remove() {
      for (i=0; i < numbers.length; i++) {
        if (numbers[i] == document.getElementById('#fifth-input').value) {
          numbers.splice(i, 1);
          break;
        }
      }
    }

    function changePlace() {
      var abc;
      var firstI;
      var secondI;
      for (i=0; i < numbers.length; i++) {
        if (numbers[i] == document.getElementById('#6-input').value) {
          firstI = i;
          break;
        }
      }
      for (i=0; i < numbers.length; i++) {
        if (numbers[i] == document.getElementById('#7-input').value) {
          secondI = i;
          break;
        }
      }
      abc = numbers[firstI];
      numbers[firstI] = numbers[secondI];
      numbers[secondI] = abc;
    }
