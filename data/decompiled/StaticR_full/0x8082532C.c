/* Function at 0x8082532C, size=68 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8082532C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x80825338
    /* mulli r31, r4, 0x248 */ // 0x80825340
    *(0x28 + r1) = r30; // stw @ 0x80825344
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8082534C
    /* lis r29, 0 */ // 0x80825350
    *(0x20 + r1) = r28; // stw @ 0x80825354
    r3 = *(0 + r29); // lwz @ 0x80825358
    r3 = *(0x14 + r3); // lwz @ 0x8082535C
    r28 = r3 + r31; // 0x80825360
    *(8 + r1) = r0; // stw @ 0x80825364
    r3 = r28;
    FUN_8061DA88(r3); // bl 0x8061DA88
}