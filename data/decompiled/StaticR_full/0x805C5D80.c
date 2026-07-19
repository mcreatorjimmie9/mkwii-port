/* Function at 0x805C5D80, size=156 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

int FUN_805C5D80(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x805C5D88
    /* li r6, 0 */ // 0x805C5D8C
    *(0x14 + r1) = r0; // stw @ 0x805C5D90
    r5 = *(0 + r5); // lwz @ 0x805C5D94
    r0 = *(0xb70 + r5); // lwz @ 0x805C5D98
    if (<) goto 0x0x805c5dac;
    if (<=) goto 0x0x805c5dd0;
    if (==) goto 0x0x805c5dd0;
    if (==) goto 0x0x805c5ddc;
    if (==) goto 0x0x805c5de8;
    if (==) goto 0x0x805c5df4;
    /* b 0x805c5e08 */ // 0x805C5DCC
    FUN_805C5B20(); // bl 0x805C5B20
    r6 = *(4 + r3); // lbz @ 0x805C5DD4
    /* b 0x805c5e08 */ // 0x805C5DD8
    FUN_805C5B20(); // bl 0x805C5B20
    r6 = *(4 + r3); // lbz @ 0x805C5DE0
    /* b 0x805c5e08 */ // 0x805C5DE4
    FUN_805C5B20(); // bl 0x805C5B20
    r6 = *(4 + r3); // lbz @ 0x805C5DEC
    /* b 0x805c5e08 */ // 0x805C5DF0
    /* lis r3, 0 */ // 0x805C5DF4
    r3 = *(0 + r3); // lwz @ 0x805C5DF8
    FUN_805A47F4(r3); // bl 0x805A47F4
    r3 = *(0 + r3); // lwz @ 0x805C5E00
    r6 = *(0 + r3); // lbz @ 0x805C5E04
    r0 = *(0x14 + r1); // lwz @ 0x805C5E08
    r3 = r6;
    return;
}