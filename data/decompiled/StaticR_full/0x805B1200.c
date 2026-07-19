/* Function at 0x805B1200, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805B1200(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x805B120C
    *(0xc + r1) = r31; // stw @ 0x805B1210
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x805B1218
    *(0xe4 + r3) = r0; // stb @ 0x805B121C
    if (==) goto 0x0x805b1240;
    r12 = *(0 + r4); // lwz @ 0x805B1228
    r3 = r4;
    r12 = *(0x10 + r12); // lwz @ 0x805B1230
    /* mtctr r12 */ // 0x805B1234
    /* bctrl  */ // 0x805B1238
    /* b 0x805b1244 */ // 0x805B123C
    /* li r3, -1 */ // 0x805B1240
    if (!=) goto 0x0x805b125c;
    r3 = *(4 + r31); // lwz @ 0x805B124C
    /* li r0, 1 */ // 0x805B1250
    *(0xa6 + r3) = r0; // stb @ 0x805B1254
    /* b 0x805b12a0 */ // 0x805B1258
    r3 = *(4 + r31); // lwz @ 0x805B125C
    if (==) goto 0x0x805b127c;
    r12 = *(0 + r3); // lwz @ 0x805B1268
    r12 = *(0x10 + r12); // lwz @ 0x805B126C
    /* mtctr r12 */ // 0x805B1270
    /* bctrl  */ // 0x805B1274
    /* b 0x805b1280 */ // 0x805B1278
    /* li r3, -1 */ // 0x805B127C
    if (==) goto 0x0x805b12a0;
    /* li r4, 0 */ // 0x805B1288
    *(0xdc + r31) = r4; // stw @ 0x805B128C
    r3 = *(0xe8 + r31); // lwz @ 0x805B1290
    /* li r0, 1 */ // 0x805B1294
    *(0xe0 + r31) = r4; // stw @ 0x805B1298
    *(0x14 + r3) = r0; // stw @ 0x805B129C
    r0 = *(0x14 + r1); // lwz @ 0x805B12A0
    r31 = *(0xc + r1); // lwz @ 0x805B12A4
    return;
}