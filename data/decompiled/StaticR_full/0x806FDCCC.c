/* Function at 0x806FDCCC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806FDCCC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806FDCE0
    r30 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FDCE8
    if (!=) goto 0x0x806fdd04;
    /* li r0, 2 */ // 0x806FDCF4
    *(0x14 + r3) = r0; // stw @ 0x806FDCF8
    /* li r3, 0 */ // 0x806FDCFC
    /* b 0x806fdd64 */ // 0x806FDD00
    r3 = *(0x757c + r3); // lwz @ 0x806FDD04
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fdd24;
    /* li r0, 6 */ // 0x806FDD14
    *(0x14 + r30) = r0; // stw @ 0x806FDD18
    /* li r3, 0 */ // 0x806FDD1C
    /* b 0x806fdd64 */ // 0x806FDD20
}