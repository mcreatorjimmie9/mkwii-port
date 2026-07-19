/* Function at 0x8062FF1C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062FF1C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8062FF24
    r7 = r4;
    *(0x14 + r1) = r0; // stw @ 0x8062FF2C
    r6 = r6 + 0; // 0x8062FF30
    /* li r0, 0 */ // 0x8062FF34
    r4 = r5;
    *(0xc + r1) = r31; // stw @ 0x8062FF3C
    r31 = r3;
    *(0 + r3) = r6; // stw @ 0x8062FF44
    *(4 + r3) = r7; // stw @ 0x8062FF48
    *(0x70 + r3) = r0; // stw @ 0x8062FF4C
    FUN_8062FFAC(); // bl 0x8062FFAC
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8062FF58
    r0 = *(0x14 + r1); // lwz @ 0x8062FF5C
    return;
}