/* Function at 0x8088DDA0, size=188 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8088DDA0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x8088DDA8
    r31 = r3;
    *(0xf8 + r1) = r30; // stw @ 0x8088DDB8
    *(0xf4 + r1) = r29; // stw @ 0x8088DDBC
    /* lis r29, 0 */ // 0x8088DDC0
    r29 = r29 + 0; // 0x8088DDC4
    *(0xf0 + r1) = r28; // stw @ 0x8088DDC8
    r28 = r4;
    FUN_8089FDB4(); // bl 0x8089FDB4
    /* lis r4, 0 */ // 0x8088DDD4
    r3 = r31 + 0xac; // 0x8088DDD8
    r4 = r4 + 0; // 0x8088DDDC
    *(0 + r31) = r4; // stw @ 0x8088DDE0
    FUN_8079A188(r4, r3, r4); // bl 0x8079A188
    /* lfs f0, 0(r29) */ // 0x8088DDE8
    /* li r30, 0 */ // 0x8088DDEC
    /* stfs f0, 0xd4(r1) */ // 0x8088DDF0
    /* lis r4, 0 */ // 0x8088DDF4
    /* lis r5, 0 */ // 0x8088DDF8
    r3 = r31 + 0x194; // 0x8088DDFC
    /* stfs f0, 0xd8(r1) */ // 0x8088DE00
    r4 = r4 + 0; // 0x8088DE04
    r12 = *(0xd4 + r1); // lwz @ 0x8088DE08
    r5 = r5 + 0; // 0x8088DE0C
    /* stfs f0, 0xdc(r1) */ // 0x8088DE10
    /* li r6, 0xc */ // 0x8088DE14
    r11 = *(0xd8 + r1); // lwz @ 0x8088DE18
    /* li r7, 2 */ // 0x8088DE1C
    /* stfs f0, 0xc8(r1) */ // 0x8088DE20
    r10 = *(0xdc + r1); // lwz @ 0x8088DE24
    /* stfs f0, 0xcc(r1) */ // 0x8088DE28
    r9 = *(0xc8 + r1); // lwz @ 0x8088DE2C
    /* stfs f0, 0xd0(r1) */ // 0x8088DE30
    r8 = *(0xcc + r1); // lwz @ 0x8088DE34
    r0 = *(0xd0 + r1); // lwz @ 0x8088DE38
    *(0x178 + r31) = r30; // stw @ 0x8088DE3C
    *(0x17c + r31) = r12; // stw @ 0x8088DE40
    *(0x180 + r31) = r11; // stw @ 0x8088DE44
    *(0x184 + r31) = r10; // stw @ 0x8088DE48
    *(0x188 + r31) = r9; // stw @ 0x8088DE4C
    *(0x18c + r31) = r8; // stw @ 0x8088DE50
    *(0x190 + r31) = r0; // stw @ 0x8088DE54
    FUN_805E3430(); // bl 0x805E3430
}