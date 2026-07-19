/* Function at 0x806FBDE8, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806FBDE8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806FBDF4
    r27 = r3;
    r28 = r4;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FBE00
    if (!=) goto 0x0x806fbe1c;
    /* li r0, 2 */ // 0x806FBE0C
    *(0x14 + r3) = r0; // stw @ 0x806FBE10
    /* li r3, 0 */ // 0x806FBE14
    /* b 0x806fbeb8 */ // 0x806FBE18
    r3 = *(0x757c + r3); // lwz @ 0x806FBE1C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fbe3c;
    /* li r0, 6 */ // 0x806FBE2C
    *(0x14 + r27) = r0; // stw @ 0x806FBE30
    /* li r3, 0 */ // 0x806FBE34
}