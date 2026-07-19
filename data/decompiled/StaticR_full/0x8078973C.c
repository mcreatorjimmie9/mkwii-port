/* Function at 0x8078973C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

int FUN_8078973C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80789744
    r0 = r4 + -2; // 0x80789748
    if (<=) goto 0x0x8078975c;
    if (!=) goto 0x0x807897a0;
    /* lis r3, 0 */ // 0x8078975C
    r3 = *(0 + r3); // lwz @ 0x80789760
    r3 = *(0x10 + r3); // lwz @ 0x80789764
    FUN_80694E54(r3); // bl 0x80694E54
    if (!=) goto 0x0x8078978c;
    /* lis r5, 0 */ // 0x80789774
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x8078977C
    /* li r5, 0x1e */ // 0x80789780
    FUN_80787C60(r5, r4, r5); // bl 0x80787C60
    /* b 0x807897a0 */ // 0x80789788
    /* lis r5, 0 */ // 0x8078978C
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x80789794
    /* li r5, 0 */ // 0x80789798
    FUN_80787C60(r5, r4, r5); // bl 0x80787C60
    r0 = *(0x14 + r1); // lwz @ 0x807897A0
    return;
}