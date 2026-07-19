/* Function at 0x8067AB98, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8067AB98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8067ABAC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8067ABB4
    r29 = r3;
    if (==) goto 0x0x8067ace8;
    /* addis r3, r3, 2 */ // 0x8067ABC0
    /* li r4, -1 */ // 0x8067ABC4
    r3 = r3 + -0x3af8; // 0x8067ABC8
    FUN_806DDA58(r4, r3); // bl 0x806DDA58
    /* addis r3, r29, 2 */ // 0x8067ABD0
    /* li r4, -1 */ // 0x8067ABD4
    r3 = r3 + -0x3c70; // 0x8067ABD8
    FUN_806DDA58(r3, r4, r3); // bl 0x806DDA58
    /* addis r3, r29, 2 */ // 0x8067ABE0
    /* li r4, -1 */ // 0x8067ABE4
    r3 = r3 + -0x3de8; // 0x8067ABE8
    FUN_806DDA58(r3, r4, r3); // bl 0x806DDA58
    /* addis r3, r29, 2 */ // 0x8067ABF0
    /* li r4, -1 */ // 0x8067ABF4
    r3 = r3 + -0x3f60; // 0x8067ABF8
    FUN_806DDA58(r3, r4, r3); // bl 0x806DDA58
    /* lis r4, 0 */ // 0x8067AC00
    r3 = r29 + 0x6c00; // 0x8067AC04
    r4 = r4 + 0; // 0x8067AC08
    /* li r5, 0x1b4 */ // 0x8067AC0C
    /* li r6, 0xc8 */ // 0x8067AC10
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x698c; // 0x8067AC18
    /* li r4, -1 */ // 0x8067AC1C
    FUN_806DBAB4(r5, r6, r3, r4); // bl 0x806DBAB4
    r3 = r29 + 0x6718; // 0x8067AC24
    /* li r4, -1 */ // 0x8067AC28
    FUN_806DBAB4(r3, r4, r3, r4); // bl 0x806DBAB4
    r3 = r29 + 0x64a4; // 0x8067AC30
    /* li r4, -1 */ // 0x8067AC34
}