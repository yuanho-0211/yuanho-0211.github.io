```c
library ieee;
use ieee.std_logic_1164.all;

entity lab02 is
    port (
        a : in  std_logic;
        b : in  std_logic;
        c : in  std_logic;
        d : in  std_logic;
        y : out std_logic
    );
end lab02;

architecture ar of lab02 is
begin
    Y <= ((not c) and (((not a) and b) or not d)) or ((not b) and d) or (a and b and c);
end ar;
```

