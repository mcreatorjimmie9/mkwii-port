/* Function at 0x805F3908, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805F3908(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    r7 = r3;
    *(0x14 + r1) = r0; // stw @ 0x805F3914
    r5 = *(0x8c + r3); // lwz @ 0x805F3918
    r3 = *(0x6c + r4); // lwz @ 0x805F391C
    if (==) goto 0x0x805f3948;
    r0 = *(0 + r5); // lwz @ 0x805F3928
    r3 = r3 + 4; // 0x805F392C
    *(8 + r1) = r0; // stw @ 0x805F3930
    /* li r4, 0 */ // 0x805F3938
    /* li r6, 0 */ // 0x805F393C
    /* lfs f1, 0x90(r7) */ // 0x805F3940
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x805F3948
    return;
}