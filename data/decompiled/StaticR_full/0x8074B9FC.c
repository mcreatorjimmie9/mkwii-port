/* Function at 0x8074B9FC, size=80 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8074B9FC(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x8074BA04
    /* li r7, 0 */ // 0x8074BA08
    *(0x24 + r1) = r0; // stw @ 0x8074BA0C
    /* li r0, 0 */ // 0x8074BA10
    r6 = *(0 + r5); // lwzu @ 0x8074BA18
    *(0x10 + r1) = r6; // stw @ 0x8074BA1C
    /* li r6, 2 */ // 0x8074BA20
    r8 = *(4 + r5); // lwz @ 0x8074BA24
    *(8 + r1) = r0; // stw @ 0x8074BA2C
    *(0x14 + r1) = r8; // stw @ 0x8074BA30
    *(0xc + r1) = r0; // stw @ 0x8074BA34
    FUN_808A1444(r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x8074BA3C
    return;
}