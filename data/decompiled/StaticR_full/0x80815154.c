/* Function at 0x80815154, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_80815154(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8081516C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80815174
    r28 = r3;
    if (==) goto 0x0x80815228;
    /* lis r5, 0 */ // 0x80815180
    /* lis r4, 0 */ // 0x80815184
    r5 = r5 + 0; // 0x80815188
    *(0 + r3) = r5; // stw @ 0x8081518C
    r31 = *(0 + r4); // lwz @ 0x80815190
    if (==) goto 0x0x8081520c;
    /* li r0, 0 */ // 0x8081519C
    *(0 + r4) = r0; // stw @ 0x808151A0
    if (==) goto 0x0x8081520c;
    if (==) goto 0x0x80815204;
    *(0 + r31) = r5; // stw @ 0x808151AC
    r30 = *(0 + r4); // lwz @ 0x808151B0
    if (==) goto 0x0x808151f8;
    *(0 + r4) = r0; // stw @ 0x808151BC
    if (==) goto 0x0x808151f8;
    if (==) goto 0x0x808151f0;
    *(0 + r30) = r5; // stw @ 0x808151C8
    r3 = *(0 + r4); // lwz @ 0x808151CC
    if (==) goto 0x0x808151e4;
    *(0 + r4) = r0; // stw @ 0x808151D8
    /* li r4, 1 */ // 0x808151DC
    FUN_80815548(r4); // bl 0x80815548
    r3 = r30;
    /* li r4, 0 */ // 0x808151E8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808151FC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r28;
    /* li r4, 0 */ // 0x80815210
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80815228;
    r3 = r28;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80815228
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x80815230
    r29 = *(0x14 + r1); // lwz @ 0x80815234
    r28 = *(0x10 + r1); // lwz @ 0x80815238
}