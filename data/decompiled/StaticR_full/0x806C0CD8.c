/* Function at 0x806C0CD8, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806C0CD8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806C0CEC
    r29 = r3;
    r0 = *(0x247c + r3); // lwz @ 0x806C0CF4
    if (!=) goto 0x0x806c0d50;
    r0 = *(0x2488 + r3); // lwz @ 0x806C0D00
    /* li r31, 0 */ // 0x806C0D04
    r4 = *(0x2474 + r3); // lwz @ 0x806C0D08
    *(0x2674 + r3) = r0; // stw @ 0x806C0D0C
    r30 = r4 + 0x174; // 0x806C0D10
    r3 = r30;
    FUN_8064A340(r3); // bl 0x8064A340
    if (==) goto 0x0x806c0d28;
    /* b 0x806c0d3c */ // 0x806C0D24
    r31 = r31 + 1; // 0x806C0D28
    r30 = r30 + 0x254; // 0x806C0D2C
    if (<) goto 0x0x806c0d14;
    /* li r31, -1 */ // 0x806C0D38
    *(0x2678 + r29) = r31; // stw @ 0x806C0D40
    if (>=) goto 0x0x806c0d50;
    /* li r0, 0 */ // 0x806C0D48
    *(0x2678 + r29) = r0; // stw @ 0x806C0D4C
    /* li r0, -1 */ // 0x806C0D50
    *(0x247c + r29) = r0; // stw @ 0x806C0D54
    r31 = *(0x1c + r1); // lwz @ 0x806C0D58
    r30 = *(0x18 + r1); // lwz @ 0x806C0D5C
    r29 = *(0x14 + r1); // lwz @ 0x806C0D60
    r0 = *(0x24 + r1); // lwz @ 0x806C0D64
    return;
}