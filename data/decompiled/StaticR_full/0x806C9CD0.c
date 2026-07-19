/* Function at 0x806C9CD0, size=148 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806C9CD0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806C9CD8
    r4 = r4 + 0; // 0x806C9CE0
    *(0xac + r1) = r31; // stw @ 0x806C9CE4
    *(0xa8 + r1) = r30; // stw @ 0x806C9CE8
    r30 = r3;
    FUN_8066C34C(r4); // bl 0x8066C34C
    /* lis r3, 0 */ // 0x806C9CF4
    r5 = *(0 + r3); // lwz @ 0x806C9CF8
    r0 = *(0x36 + r5); // lha @ 0x806C9CFC
    if (<) goto 0x0x806c9d24;
    /* lis r3, 1 */ // 0x806C9D08
    /* clrlwi r4, r0, 0x18 */ // 0x806C9D0C
    r0 = r3 + -0x6c10; // 0x806C9D10
    r0 = r0 * r4; // 0x806C9D14
    r3 = r5 + r0; // 0x806C9D18
    r31 = r3 + 0x38; // 0x806C9D1C
    /* b 0x806c9d28 */ // 0x806C9D20
    /* li r31, 0 */ // 0x806C9D24
    FUN_8066D634(r3); // bl 0x8066D634
    /* li r4, 1 */ // 0x806C9D34
    /* li r5, 0 */ // 0x806C9D38
    /* li r6, 0 */ // 0x806C9D3C
    FUN_8066D808(r3, r4, r5, r6); // bl 0x8066D808
    r5 = r31 + 0x16; // 0x806C9D48
    /* li r4, 0 */ // 0x806C9D4C
    FUN_8066DE9C(r6, r3, r5, r4); // bl 0x8066DE9C
    r3 = r30 + 0x14; // 0x806C9D54
    /* li r4, 0 */ // 0x806C9D58
    /* li r5, 0x16 */ // 0x806C9D5C
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
}