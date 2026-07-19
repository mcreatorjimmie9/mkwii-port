/* Function at 0x808CE9F0, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_808CE9F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 2 */ // 0x808CE9F8
    *(0x14 + r1) = r29; // stw @ 0x808CEA08
    *(0x10 + r1) = r28; // stw @ 0x808CEA0C
    r28 = r3;
    r0 = *(4 + r3); // lwz @ 0x808CEA14
    if (!=) goto 0x0x808cea24;
    /* li r4, 3 */ // 0x808CEA20
    r3 = r28;
    FUN_80671C1C(r4, r3); // bl 0x80671C1C
    /* li r30, 0 */ // 0x808CEA2C
    /* li r29, 0 */ // 0x808CEA30
    /* clrlwi r0, r29, 0x18 */ // 0x808CEA34
    r4 = r30;
    /* mulli r0, r0, 0xb90 */ // 0x808CEA3C
    r3 = r28;
    /* li r6, 0 */ // 0x808CEA44
    r30 = r30 + 1; // 0x808CEA48
    r5 = r28 + r0; // 0x808CEA4C
    r31 = r5 + 0x1a0; // 0x808CEA50
    r5 = r31;
    FUN_80671C2C(r6, r5); // bl 0x80671C2C
    r3 = r31;
    /* clrlwi r4, r29, 0x18 */ // 0x808CEA60
    FUN_8087FF94(r5, r3); // bl 0x8087FF94
    r29 = r29 + 1; // 0x808CEA68
    if (<) goto 0x0x808cea34;
    r0 = *(4 + r28); // lwz @ 0x808CEA74
    if (!=) goto 0x0x808ceae8;
    /* li r3, 0x198 */ // 0x808CEA80
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808ceaa4;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x808CEA98
    r3 = r3 + 0; // 0x808CEA9C
    *(0 + r31) = r3; // stw @ 0x808CEAA0
    *(0x18c0 + r28) = r31; // stw @ 0x808CEAA4
    r3 = r28;
    r4 = r30;
    r5 = r31;
    /* li r6, 0 */ // 0x808CEAB4
    FUN_80671C2C(r3, r4, r5, r6); // bl 0x80671C2C
}