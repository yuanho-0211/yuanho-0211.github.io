```c
library ieee;
use ieee.std_logic_1164.all;

entity lab02_2 is
    port (
        A(0),A1,A2,A3,A4,A5,A6,A7: in  std_logic;
        EN : in  std_logic;
        Y0,Y1,Y2 : out std_logic
    );
end lab02_2;

architecture ar of lab02_2 is
 begin
  process(A(0),A1,A2,A3,A4,A5,A6,A7,EN)
  begin
    if (EN ='1') then
       if(A(0) ='1')then
       
         Y0 <= '0';
         Y1 <= '0';
         Y2 <= '0';
       elsif(A1 ='1')then
         
         Y0 <= '1';
         Y1 <= '0';
         Y2 <= '0';
       elsif(A2 ='1')then
        
         Y0 <= '0';
         Y1 <= '1';
         Y2 <= '0';
       elsif(A3 ='1')then
        
         Y0 <= '1';
         Y1 <= '1';
         Y2 <= '0';
       elsif(A4 ='1')then
        
         Y0 <= '0';
         Y1 <= '0';
         Y2 <= '1';
       elsif(A5 ='1')then
        
         Y0 <= '1';
         Y1 <= '0';
         Y2 <= '1';
       elsif(A6 ='1')then
        
        
         Y0 <= '0';
         Y1 <= '1';
         Y2 <= '1';
       elsif(A7 ='1')then
         
         Y0 <= '1';
         Y1 <= '1';
         Y2 <= '1';
       else
         Y0 <= '0';
         Y1 <= '0';
         Y2 <= '0';
       end if;
    else
       Y0 <= '0';
       Y1 <= '0';
       Y2 <= '0';
    end if;
   end process;
 end ar;
```
<img width="1509" height="669" alt="image" src="https://github.com/user-attachments/assets/64e13af4-b48c-4624-85fc-06e144994b88" />

