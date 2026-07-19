/* Function at 0x807FCB58, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FCB58(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FCB64
    r31 = r3;
    FUN_8080F158(); // bl 0x8080F158
    /* lis r4, 0 */ // 0x807FCB70
    r3 = r31;
    r4 = r4 + 0; // 0x807FCB78
    *(0 + r31) = r4; // stw @ 0x807FCB7C
    r31 = *(0xc + r1); // lwz @ 0x807FCB80
    r0 = *(0x14 + r1); // lwz @ 0x807FCB84
    return;
}