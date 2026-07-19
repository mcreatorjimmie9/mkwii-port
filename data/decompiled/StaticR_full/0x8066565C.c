/* Function at 0x8066565C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8066565C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x80665678
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x80665680
    r28 = r3;
    if (<=) goto 0x0x806656b8;
    /* mulli r3, r4, 0xc */ // 0x8066568C
    r31 = r4;
    r3 = r3 + 0x10; // 0x80665694
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8066569C
    r7 = r31;
    r4 = r4 + 0; // 0x806656A4
    /* li r5, 0 */ // 0x806656A8
    /* li r6, 0xc */ // 0x806656AC
    FUN_805E3430(r4, r7, r4, r5, r6); // bl 0x805E3430
    *(8 + r28) = r3; // stw @ 0x806656B4
    if (<=) goto 0x0x806656e8;
    /* mulli r3, r29, 0xc */ // 0x806656C0
    r3 = r3 + 0x10; // 0x806656C4
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x806656CC
    r7 = r29;
    r4 = r4 + 0; // 0x806656D4
    /* li r5, 0 */ // 0x806656D8
    /* li r6, 0xc */ // 0x806656DC
    FUN_805E3430(r4, r7, r4, r5, r6); // bl 0x805E3430
    *(0xc + r28) = r3; // stw @ 0x806656E4
    if (<=) goto 0x0x80665718;
    /* mulli r3, r30, 0xc */ // 0x806656F0
}