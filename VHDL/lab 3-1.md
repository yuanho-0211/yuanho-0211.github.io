```c
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity lab03 is
     port(
     DIN,CLK: in std_logic;
     S0, S1, S2, S3, S4, S5, S6, S7:out std_logic);
end lab03;

architecture arc of lab03 is
    Component DFF
    port (
        D,CLK: in std_logic;
        Q: out std_logic
    );  
    End Component;
     signal Si0, Si1, Si2, Si3, Si4, Si5, Si6, Si7 : std_logic;
begin
        U7:DFF
        Port Map(D=>DIN,CLK=>CLK,Q=>Si7);
        
        U6:DFF
        Port Map(D=>Si7,CLK=>CLK,Q=>Si6);
        
        U5:DFF
        Port Map(D=>Si6,CLK=>CLK,Q=>Si5);
        
        U4:DFF
        Port Map(D=>Si5,CLK=>CLK,Q=>Si4);
        
        U3:DFF
        Port Map(D=>Si4,CLK=>CLK,Q=>Si3);
        
        U2:DFF
        Port Map(D=>Si3,CLK=>CLK,Q=>Si2);
        
        U1:DFF
        Port Map(D=>Si2,CLK=>CLK,Q=>Si1);
        
        U0:DFF
        Port Map(D=>Si1,CLK=>CLK,Q=>Si0);
        
       S0 <= Si7;
       S1 <= Si6;
       S2 <= Si5;
       S3 <= Si4;
       S4 <= Si3;
       S5 <= Si2;
       S6 <= Si1;
       S7 <= Si0;

         

end arc;
```
<img width="1474" height="428" alt="image" src="https://github.com/user-attachments/assets/2bf490dc-a98c-4bd3-9767-09f0b4aa0c27" />
