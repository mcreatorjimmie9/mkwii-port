/* Function at 0x806046CC, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806046CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x806046D4
    r6 = r6 + 0; // 0x806046DC
    *(0x1c + r1) = r31; // stw @ 0x806046E0
    *(0x18 + r1) = r30; // stw @ 0x806046E4
    r30 = r6 + 0x11; // 0x806046E8
    /* li r6, 0 */ // 0x806046EC
    *(0x14 + r1) = r29; // stw @ 0x806046F0
    r29 = r3;
    *(8 + r3) = r5; // stw @ 0x806046F8
    /* lis r5, 0 */ // 0x806046FC
    r3 = *(0 + r5); // lwz @ 0x80604700
    r5 = r30;
    FUN_805CFF2C(r5, r5); // bl 0x805CFF2C
    /* clrlwi. r0, r3, 0x1b */ // 0x8060470C
    r31 = r3;
    if (==) goto 0x0x80604734;
    /* lis r3, 0 */ // 0x80604718
    /* lis r5, 0 */ // 0x8060471C
    r3 = r3 + 0; // 0x80604720
    /* li r4, 0x3c */ // 0x80604724
    r5 = r5 + 0; // 0x80604728
    /* crclr cr1eq */ // 0x8060472C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0 + r29) = r31; // stw @ 0x80604734
    r3 = r29;
    r4 = r30;
    /* li r5, 0 */ // 0x80604740
    /* li r6, 0 */ // 0x80604744
    FUN_805EB518(r3, r4, r5, r6); // bl 0x805EB518
    r0 = *(0x24 + r1); // lwz @ 0x8060474C
    r31 = *(0x1c + r1); // lwz @ 0x80604750
    r30 = *(0x18 + r1); // lwz @ 0x80604754
    r29 = *(0x14 + r1); // lwz @ 0x80604758
    return;
}