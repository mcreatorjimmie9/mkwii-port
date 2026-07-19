/* Function at 0x8082552C, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8082552C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r3, r4, 0x248 */ // 0x80825534
    /* li r0, 0 */ // 0x8082553C
    *(0x2c + r1) = r31; // stw @ 0x80825540
    /* lis r31, 0 */ // 0x80825544
    *(0x28 + r1) = r30; // stw @ 0x80825548
    *(0x24 + r1) = r29; // stw @ 0x8082554C
    r29 = r4;
    r5 = *(0 + r31); // lwz @ 0x80825554
    r4 = *(0x14 + r5); // lwz @ 0x80825558
    r30 = r4 + r3; // 0x8082555C
    *(8 + r1) = r0; // stw @ 0x80825560
    r3 = r30;
    FUN_8061DA88(r3); // bl 0x8061DA88
}