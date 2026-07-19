/* Function at 0x80665FE4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80665FE4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80665FF4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80665FFC
    r30 = r3;
    if (==) goto 0x0x8066608c;
    /* lis r5, 0 */ // 0x80666008
    /* lis r4, 0 */ // 0x8066600C
    r5 = r5 + 0; // 0x80666010
    *(0 + r3) = r5; // stw @ 0x80666014
    r3 = *(0x6c + r3); // lwz @ 0x80666018
    r4 = r4 + 0; // 0x8066601C
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    /* addic. r0, r30, 0x7c */ // 0x80666024
    if (==) goto 0x0x80666068;
    r3 = *(0x84 + r30); // lwz @ 0x8066602C
    if (==) goto 0x0x80666040;
    r3 = r3 + -0x10; // 0x80666038
    FUN_805E3430(r3); // bl 0x805E3430
}