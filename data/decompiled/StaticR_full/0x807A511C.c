/* Function at 0x807A511C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807A511C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807A5124
    r0 = *(0x10 + r3); // lbz @ 0x807A5128
    if (==) goto 0x0x807a5148;
    /* lis r3, 0 */ // 0x807A5134
    r3 = *(0 + r3); // lwz @ 0x807A5138
    r3 = *(0x10 + r3); // lwz @ 0x807A513C
    FUN_8069526C(r3); // bl 0x8069526C
    r0 = *(0x14 + r1); // lwz @ 0x807A5148
    return;
}