/* Function at 0x807D4230, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D4230(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D423C
    r31 = r3;
    r0 = *(0x120 + r3); // lwz @ 0x807D4244
    r4 = *(0x38 + r3); // lwz @ 0x807D4248
    r4 = *(0 + r4); // lwz @ 0x807D4250
    if (==) goto 0x0x807d4264;
    if (==) goto 0x0x807d42ac;
    /* b 0x807d42d4 */ // 0x807D4260
    r3 = r4;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807D426C
    /* clrlwi r0, r3, 0x18 */ // 0x807D4270
    r3 = *(0 + r4); // lwz @ 0x807D4274
    /* mulli r0, r0, 0x248 */ // 0x807D4278
    r3 = *(0x14 + r3); // lwz @ 0x807D427C
    r3 = r3 + r0; // 0x807D4280
    r0 = *(0x8c + r3); // lwz @ 0x807D4284
    if (==) goto 0x0x807d42d4;
    r0 = *(0x124 + r31); // lwz @ 0x807D4290
    if (!=) goto 0x0x807d42d4;
    r3 = *(0x120 + r31); // lwz @ 0x807D429C
    r0 = r3 + 1; // 0x807D42A0
    *(0x120 + r31) = r0; // stw @ 0x807D42A4
    /* b 0x807d42d4 */ // 0x807D42A8
    r6 = *(0x10 + r4); // lwz @ 0x807D42AC
    /* li r5, 1 */ // 0x807D42B0
    /* lis r4, 0 */ // 0x807D42B4
    /* li r0, 0 */ // 0x807D42B8
    r6 = *(0x14c + r6); // lwz @ 0x807D42BC
    *(0x1a0 + r6) = r5; // stb @ 0x807D42C0
    *(0x1a4 + r6) = r5; // stw @ 0x807D42C4
    r4 = *(0 + r4); // lha @ 0x807D42C8
    *(0x124 + r3) = r4; // stw @ 0x807D42CC
    *(0x120 + r3) = r0; // stw @ 0x807D42D0
    r3 = *(0x124 + r31); // lwz @ 0x807D42D4
    /* addic. r0, r3, -1 */ // 0x807D42D8
    *(0x124 + r31) = r0; // stw @ 0x807D42DC
    if (>=) goto 0x0x807d42ec;
    /* li r0, 0 */ // 0x807D42E4
    *(0x124 + r31) = r0; // stw @ 0x807D42E8
    r0 = *(0x14 + r1); // lwz @ 0x807D42EC
    r31 = *(0xc + r1); // lwz @ 0x807D42F0
    return;
}