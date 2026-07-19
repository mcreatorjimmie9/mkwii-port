/* Function at 0x808C086C, size=76 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808C086C(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 2 */ // 0x808C0878
    /* lis r31, 0 */ // 0x808C0880
    r31 = r31 + 0; // 0x808C0884
    *(0x38 + r1) = r30; // stw @ 0x808C0888
    *(0x34 + r1) = r29; // stw @ 0x808C088C
    r29 = r3;
    *(0x30 + r1) = r28; // stw @ 0x808C0894
    /* li r28, 0 */ // 0x808C0898
    *(0x6c4 + r3) = r28; // stw @ 0x808C089C
    *(0x798 + r3) = r0; // stw @ 0x808C08A0
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808C08A8
    /* mulli r3, r30, 0x184 */ // 0x808C08AC
    r3 = r3 + 0x10; // 0x808C08B0
    FUN_805E3430(r3); // bl 0x805E3430
}