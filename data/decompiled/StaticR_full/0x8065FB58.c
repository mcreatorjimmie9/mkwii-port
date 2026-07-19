/* Function at 0x8065FB58, size=240 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_8065FB58(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -256(r1) */
    /* saved r26 */
    /* stmw r26, 0xe8(r1) */ // 0x8065FB64
    r26 = r3;
    r27 = r4;
    r28 = r5;
    FUN_805ABFC4(r3); // bl 0x805ABFC4
    r30 = *(0x64 + r26); // lwz @ 0x8065FB7C
    /* li r31, -1 */ // 0x8065FB80
    /* li r29, 0 */ // 0x8065FB84
    /* b 0x8065fbe8 */ // 0x8065FB88
    r3 = r30;
    /* clrlwi r4, r29, 0x10 */ // 0x8065FB90
    FUN_805ACCB0(r3); // bl 0x805ACCB0
    if (==) goto 0x0x8065fbac;
    r0 = *(0 + r3); // lbz @ 0x8065FBA0
    if (!=) goto 0x0x8065fbbc;
    if (>=) goto 0x0x8065fbe4;
    r31 = r29;
    /* b 0x8065fbe4 */ // 0x8065FBB8
    r4 = *(0xc4 + r3); // lwz @ 0x8065FBBC
    r0 = *(0xcc + r1); // lwz @ 0x8065FBC0
    if (!=) goto 0x0x8065fbe4;
    r3 = *(0xb8 + r3); // lwz @ 0x8065FBCC
    r0 = *(0xc0 + r1); // lwz @ 0x8065FBD0
    if (!=) goto 0x0x8065fbe4;
    r31 = r29;
    /* b 0x8065fbf4 */ // 0x8065FBE0
    r29 = r29 + 1; // 0x8065FBE4
    r0 = *(4 + r30); // lhz @ 0x8065FBE8
    if (<) goto 0x0x8065fb8c;
    r3 = r30;
    r5 = r27;
    /* clrlwi r4, r31, 0x10 */ // 0x8065FBFC
    FUN_805ACCE8(r3, r5); // bl 0x805ACCE8
    /* lis r3, 0 */ // 0x8065FC04
    /* clrlwi r5, r31, 0x18 */ // 0x8065FC08
    r3 = *(0 + r3); // lwz @ 0x8065FC0C
    /* li r4, 1 */ // 0x8065FC14
    r3 = *(0x90 + r3); // lwz @ 0x8065FC18
    FUN_80684670(r6, r4); // bl 0x80684670
    r3 = r26 + r31; // 0x8065FC20
    /* lis r4, 0 */ // 0x8065FC24
    *(0x74 + r3) = r28; // stb @ 0x8065FC28
    /* li r0, 2 */ // 0x8065FC2C
    r4 = r4 + 0; // 0x8065FC34
    *(0x94 + r26) = r0; // stw @ 0x8065FC38
    /* li r5, 0xc */ // 0x8065FC3C
    /* li r6, 5 */ // 0x8065FC40
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
}