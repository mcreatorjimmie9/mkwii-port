/* Function at 0x807DDD70, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DDD70(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807DDD78
    /* li r4, 1 */ // 0x807DDD7C
    *(0x14 + r1) = r0; // stw @ 0x807DDD80
    r5 = r5 + 0; // 0x807DDD84
    *(0xc + r1) = r31; // stw @ 0x807DDD88
    r31 = r3;
    /* lfs f1, 0x18(r5) */ // 0x807DDD90
    /* lfs f2, 0x14(r5) */ // 0x807DDD94
    /* lfs f3, 0x1c(r5) */ // 0x807DDD98
    /* lfs f4, 0xc(r5) */ // 0x807DDD9C
    FUN_807DD9EC(); // bl 0x807DD9EC
    /* li r0, 1 */ // 0x807DDDA4
    *(0x10c + r31) = r0; // stw @ 0x807DDDA8
    r31 = *(0xc + r1); // lwz @ 0x807DDDAC
    r0 = *(0x14 + r1); // lwz @ 0x807DDDB0
    return;
}