/* Function at 0x806B2C90, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806B2C90(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r8;
    *(0x18 + r1) = r30; // stw @ 0x806B2CA4
    r30 = r7;
    *(0x14 + r1) = r29; // stw @ 0x806B2CAC
    r29 = r4;
    /* mulli r0, r29, 0x254 */ // 0x806B2CB4
    r4 = r5;
    *(0x10 + r1) = r28; // stw @ 0x806B2CBC
    r28 = r3;
    r5 = r6;
    r3 = r3 + r0; // 0x806B2CC8
    r3 = r3 + 0x294; // 0x806B2CCC
    FUN_806A0A34(r5, r3); // bl 0x806A0A34
    /* slwi r0, r29, 2 */ // 0x806B2CD4
    r3 = r28 + r0; // 0x806B2CD8
    *(0x274 + r3) = r30; // stw @ 0x806B2CDC
    *(0x44 + r3) = r31; // stw @ 0x806B2CE0
    r31 = *(0x1c + r1); // lwz @ 0x806B2CE4
    r30 = *(0x18 + r1); // lwz @ 0x806B2CE8
    r29 = *(0x14 + r1); // lwz @ 0x806B2CEC
    r28 = *(0x10 + r1); // lwz @ 0x806B2CF0
    r0 = *(0x24 + r1); // lwz @ 0x806B2CF4
    return;
}