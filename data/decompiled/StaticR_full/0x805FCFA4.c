/* Function at 0x805FCFA4, size=76 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805FCFA4(int r3, int r4, int r5)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0xc4 + r1) = r29; // stw @ 0x805FCFBC
    r29 = r4;
    *(0xc0 + r1) = r28; // stw @ 0x805FCFC4
    r28 = r3;
    FUN_8061DC48(); // bl 0x8061DC48
    r31 = r3;
    r3 = r28;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r4 = r3;
    r3 = r29;
    r4 = r4 + 0x100; // 0x805FCFE4
    r5 = r31 + 0x68; // 0x805FCFE8
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
}