/* Function at 0x806EEA44, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806EEA44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806EEA4C
    *(0x14 + r1) = r0; // stw @ 0x806EEA50
    *(0xc + r1) = r31; // stw @ 0x806EEA54
    r31 = r3;
    r3 = r3 + 0x1c; // 0x806EEA5C
    r6 = *(0 + r4); // lwz @ 0x806EEA60
    r0 = *(0x36 + r6); // lha @ 0x806EEA64
    if (<) goto 0x0x806eea8c;
    /* lis r4, 1 */ // 0x806EEA70
    /* clrlwi r5, r0, 0x18 */ // 0x806EEA74
    r0 = r4 + -0x6c10; // 0x806EEA78
    r0 = r0 * r5; // 0x806EEA7C
    r4 = r6 + r0; // 0x806EEA80
    r4 = r4 + 0x38; // 0x806EEA84
    /* b 0x806eea90 */ // 0x806EEA88
    /* li r4, 0 */ // 0x806EEA8C
    /* addis r4, r4, 1 */ // 0x806EEA90
    /* li r5, 0x40 */ // 0x806EEA94
    r4 = r4 + -0x7048; // 0x806EEA98
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
}