/* Function at 0x8078FB94, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8078FB94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078FBA8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078FBB0
    r29 = r3;
    if (==) goto 0x0x8078fc4c;
    /* addic. r3, r3, 0xf8 */ // 0x8078FBBC
    if (==) goto 0x0x8078fbc8;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x8078fc3c;
    /* addic. r31, r29, 0xb4 */ // 0x8078FBD0
    if (==) goto 0x0x8078fbfc;
    /* lis r4, 0 */ // 0x8078FBD8
    r3 = r31 + 0x28; // 0x8078FBDC
    r4 = r4 + 0; // 0x8078FBE0
    /* li r5, 0xc */ // 0x8078FBE4
    /* li r6, 2 */ // 0x8078FBE8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, -1 */ // 0x8078FBF4
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078fc3c;
    r3 = r29 + 0x94; // 0x8078FC04
    /* li r4, 0 */ // 0x8078FC08
    FUN_8078FDC8(r3, r4); // bl 0x8078FDC8
    if (==) goto 0x0x8078fc3c;
    /* lis r4, 0 */ // 0x8078FC18
    r3 = r29 + 0x80; // 0x8078FC1C
    r4 = r4 + 0; // 0x8078FC20
    /* li r5, 4 */ // 0x8078FC24
    /* li r6, 4 */ // 0x8078FC28
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8078FC34
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078fc4c;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8078FC4C
    r3 = r29;
}