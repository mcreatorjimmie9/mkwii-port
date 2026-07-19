/* Function at 0x80683E70, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_80683E70(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x80683E78
    *(0x24 + r1) = r0; // stw @ 0x80683E7C
    /* stmw r26, 8(r1) */ // 0x80683E80
    /* li r31, -1 */ // 0x80683E84
    r4 = *(0 + r4); // lwz @ 0x80683E88
    /* addis r4, r4, 2 */ // 0x80683E8C
    r0 = *(0x5004 + r4); // lwz @ 0x80683E90
    *(0xc + r3) = r0; // stw @ 0x80683E94
    if (!=) goto 0x0x80683eb0;
    /* lis r4, 0 */ // 0x80683EA0
    r4 = *(0 + r4); // lwz @ 0x80683EA4
    r0 = *(0x18 + r4); // lwz @ 0x80683EA8
    *(0x10 + r3) = r0; // stw @ 0x80683EAC
    r0 = *(0xc + r3); // lwz @ 0x80683EB0
    if (==) goto 0x0x80683ee0;
    if (==) goto 0x0x80683f54;
    if (==) goto 0x0x80683f5c;
    if (==) goto 0x0x80683f64;
    if (==) goto 0x0x80683f6c;
    /* b 0x80683f74 */ // 0x80683EDC
    /* lis r26, 0 */ // 0x80683EE0
    r3 = *(0 + r26); // lwz @ 0x80683EE4
    FUN_806F5A34(); // bl 0x806F5A34
    if (!=) goto 0x0x80683f78;
    r3 = *(0 + r26); // lwz @ 0x80683EF4
    FUN_806F9488(); // bl 0x806F9488
    /* li r0, 0 */ // 0x80683EFC
    /* li r29, 0x64 */ // 0x80683F00
    r30 = r0 * r29; // 0x80683F04
    /* lis r3, 0x1062 */ // 0x80683F08
    /* lis r28, -0x8000 */ // 0x80683F0C
    r27 = r3 + 0x4dd3; // 0x80683F10
    /* b 0x80683f40 */ // 0x80683F14
    r3 = *(0 + r26); // lwz @ 0x80683F18
    FUN_806F5BA0(r3); // bl 0x806F5BA0
    r0 = *(0xf8 + r28); // lwz @ 0x80683F20
    /* srwi r0, r0, 2 */ // 0x80683F24
    r0 = r27 * r0; // 0x80683F28
    /* srwi r3, r0, 6 */ // 0x80683F2C
    r0 = r3 * r29; // 0x80683F30
    /* mulli r4, r3, 0x64 */ // 0x80683F34
    r3 = r0 + r30; // 0x80683F38
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r26); // lwz @ 0x80683F40
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x80683f18;
    /* b 0x80683f78 */ // 0x80683F50
    /* li r31, 0x10 */ // 0x80683F54
    /* b 0x80683f78 */ // 0x80683F58
    /* li r31, 0x11 */ // 0x80683F5C
    /* b 0x80683f78 */ // 0x80683F60
    /* li r31, 0x12 */ // 0x80683F64
    /* b 0x80683f78 */ // 0x80683F68
    /* li r31, 0x13 */ // 0x80683F6C
    /* b 0x80683f78 */ // 0x80683F70
    /* li r31, 0x14 */ // 0x80683F74
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80683F80
    return;
}