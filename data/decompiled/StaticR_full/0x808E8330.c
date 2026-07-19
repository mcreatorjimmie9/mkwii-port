/* Function at 0x808E8330, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_808E8330(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808E8338
    /* li r0, 1 */ // 0x808E833C
    *(0x3dc + r3) = r0; // stb @ 0x808E8340
    FUN_808B2D44(); // bl 0x808B2D44
    /* lis r3, 0 */ // 0x808E8348
    r3 = *(0 + r3); // lwz @ 0x808E834C
    r3 = *(0 + r3); // lwz @ 0x808E8350
    FUN_80685E54(r3); // bl 0x80685E54
    r0 = *(0x14 + r1); // lwz @ 0x808E8358
    return;
}