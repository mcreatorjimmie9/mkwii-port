/* Function at 0x8070020C, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8070020C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80700224
    r29 = r5;
    /* li r5, 0x2a00 */ // 0x8070022C
    *(0x10 + r1) = r28; // stw @ 0x80700230
    r28 = r4;
    /* li r4, 0 */ // 0x80700238
    *(0x4200 + r3) = r6; // stw @ 0x8070023C
    r3 = r3 + 0x4208; // 0x80700240
    FUN_805E3430(r4, r3); // bl 0x805E3430
}