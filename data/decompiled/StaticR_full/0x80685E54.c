/* Function at 0x80685E54, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80685E54(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80685E60
    r31 = r3;
    r0 = *(0x400 + r3); // lwz @ 0x80685E68
    if (!=) goto 0x0x80685e90;
    /* li r3, 0x100 */ // 0x80685E74
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80685e88;
    FUN_80670298(r3); // bl 0x80670298
    *(0x400 + r31) = r3; // stw @ 0x80685E88
    FUN_80670340(); // bl 0x80670340
}