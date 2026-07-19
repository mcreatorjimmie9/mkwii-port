/* Function at 0x8083BD30, size=268 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8083BD30(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x28 + r1) = r30; // stw @ 0x8083BD44
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x8083BD4C
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x8083BD58
    r28 = r3;
    r7 = *(0x50 + r3); // lwz @ 0x8083BD60
    r0 = *(0x54 + r3); // lwz @ 0x8083BD64
    *(0xc + r1) = r0; // stw @ 0x8083BD68
    *(8 + r1) = r7; // stw @ 0x8083BD6C
    r0 = *(0x58 + r3); // lwz @ 0x8083BD70
    r3 = r3 + 0x1a4; // 0x8083BD74
    *(0x10 + r1) = r0; // stw @ 0x8083BD78
    FUN_8081EF98(r3); // bl 0x8081EF98
    /* stfs f1, 0x1a0(r28) */ // 0x8083BD84
    if (==) goto 0x0x8083bdb8;
    /* lis r3, 0 */ // 0x8083BD8C
    /* frsp f0, f1 */ // 0x8083BD90
    /* lfs f1, 0(r3) */ // 0x8083BD94
    /* .byte 0xe0, 0x7c, 0x01, 0xa4 */ // 0x8083BD98
    /* fneg f0, f0 */ // 0x8083BD9C
    /* .byte 0x10, 0x43, 0x00, 0x58 */ // 0x8083BDA0
    /* .byte 0xe0, 0x7c, 0x81, 0xac */ // 0x8083BDA4
    /* stfs f0, 0x1a0(r28) */ // 0x8083BDA8
    /* .byte 0xf0, 0x5c, 0x01, 0xa4 */ // 0x8083BDAC
    /* .byte 0x10, 0x43, 0x00, 0x58 */ // 0x8083BDB0
    /* .byte 0xf0, 0x5c, 0x81, 0xac */ // 0x8083BDB4
    /* lfs f1, 0x1ac(r28) */ // 0x8083BDB8
    /* lis r3, 0 */ // 0x8083BDBC
    /* lfs f3, 0x1a4(r28) */ // 0x8083BDC0
    /* fneg f4, f1 */ // 0x8083BDC8
    /* lfs f2, 0x1a8(r28) */ // 0x8083BDCC
    /* lfs f0, 0(r3) */ // 0x8083BDD0
    /* stfs f3, 0x1b0(r28) */ // 0x8083BDD4
    /* stfs f2, 0x1b4(r28) */ // 0x8083BDD8
    /* stfs f1, 0x1b8(r28) */ // 0x8083BDDC
    /* stfs f4, 0x1bc(r28) */ // 0x8083BDE0
    /* stfs f0, 0x1c0(r28) */ // 0x8083BDE4
    /* stfs f3, 0x1c4(r28) */ // 0x8083BDE8
    if (>=) goto 0x0x8083be00;
    /* li r0, 0 */ // 0x8083BDF0
    *(0x1c8 + r28) = r0; // stw @ 0x8083BDF4
    *(0x1cd + r28) = r0; // stb @ 0x8083BDF8
    /* b 0x8083be0c */ // 0x8083BDFC
    /* li r0, 1 */ // 0x8083BE00
    *(0x1c8 + r28) = r29; // stw @ 0x8083BE04
    *(0x1cd + r28) = r0; // stb @ 0x8083BE08
    /* lis r6, 0 */ // 0x8083BE0C
    r5 = *(0 + r6); // lwzu @ 0x8083BE10
    /* li r3, 1 */ // 0x8083BE14
    /* li r0, 0 */ // 0x8083BE18
    r4 = *(4 + r6); // lwz @ 0x8083BE1C
    *(0x178 + r28) = r4; // stw @ 0x8083BE20
    *(0x174 + r28) = r5; // stw @ 0x8083BE24
    r4 = *(8 + r6); // lwz @ 0x8083BE28
    *(0x17c + r28) = r4; // stw @ 0x8083BE2C
    *(0x1ce + r28) = r3; // stb @ 0x8083BE30
    *(0x1cc + r28) = r31; // stb @ 0x8083BE34
    *(0x1cf + r28) = r0; // stb @ 0x8083BE38
}