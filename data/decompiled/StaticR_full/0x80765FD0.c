/* Function at 0x80765FD0, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80765FD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80765FE0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80765FE8
    r30 = r3;
    if (==) goto 0x0x80766020;
    /* addic. r0, r3, 0xb0 */ // 0x80765FF4
    if (==) goto 0x0x80766010;
    /* lis r4, 0 */ // 0x80765FFC
    r4 = r4 + 0; // 0x80766000
    *(0xb0 + r3) = r4; // stw @ 0x80766004
    r3 = *(0xc4 + r3); // lwz @ 0x80766008
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80766020;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80766024
    r30 = *(8 + r1); // lwz @ 0x80766028
    r0 = *(0x14 + r1); // lwz @ 0x8076602C
    return;
}