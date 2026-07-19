/* Function at 0x806B82D8, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806B82D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B82E0
    /* li r5, 0 */ // 0x806B82E4
    *(0x14 + r1) = r0; // stw @ 0x806B82E8
    /* li r6, 0 */ // 0x806B82EC
    *(0xc + r1) = r31; // stw @ 0x806B82F0
    r31 = r3;
    r3 = r3 + 0x19c; // 0x806B82F8
    FUN_80670D14(r6, r3); // bl 0x80670D14
    /* lis r3, 0 */ // 0x806B8300
    /* li r4, 0 */ // 0x806B8304
    r3 = *(0 + r3); // lwz @ 0x806B8308
    r3 = r3 + 0x34; // 0x806B830C
    FUN_8067F3BC(r3, r4, r3); // bl 0x8067F3BC
    r4 = r3;
    r3 = r31 + 0x19c; // 0x806B8318
    FUN_80670D24(r3, r4, r3); // bl 0x80670D24
    /* li r0, 0 */ // 0x806B8320
    *(0x608 + r31) = r0; // stb @ 0x806B8324
    r31 = *(0xc + r1); // lwz @ 0x806B8328
    r0 = *(0x14 + r1); // lwz @ 0x806B832C
    return;
}