procedure scope is
   n: integer;

   procedure A(x: in integer) is
      z: float;

      function B(y: in integer) return float is
         n: float;
      begin
         print("Enter a real: ");
         n := 1.5;
         return n * float(y);
      end B;

   begin
      z := B(x);
      print("Answer = ");
      print(z,2,4,0);
   end A;

begin
   print("Enter an integer: ");
   n := 5;
   A(n);
end scope;