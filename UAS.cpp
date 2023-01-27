#include <iostream>
using namespace std;

int pilih, harga_vape;

void menu_utama();

void menu_device();
void menu_mod();
void menu_pod();
void menu_aio();

void menu_atomizer();
void menu_rda();
void menu_rta();

void menu_battery();

void menu_coil();

void menu_cartridge();

void menu_cotton();

void menu_liquid();

struct pilihan{
    string opsi[7];
};

int main(){
    system("color B");
    int device, atomizer, total, total_akhir, kembalian, bayar;
    char loop;

    menu:
    menu_utama();
    cin >> pilih;
    system("cls");

    switch(pilih){
        case 1 :
            menu_device();
            cin >> device;
            system("cls");
            switch(device){
                case 1:
                    menu_mod();
                    break;
                case 2:
                    menu_pod();
                    break;
                case 3:
                    menu_aio();
                    break;
                default:
                    cout << "Pilihan anda tidak ada dalam daftar";
                    exit(0);
            }
        break;
        case 2 :
            menu_atomizer();
            cin >> atomizer;
            system("cls");
            switch(atomizer){
                case 1:
                    menu_rda();
                    break;
                case 2:
                    menu_rta();
                    break;
                default:
                    cout << "Pilihan anda tidak ada dalam daftar";
                    exit(0);

            }
        break;
        case 3 :
            menu_battery();
        break;
        case 4 :
            menu_coil();
        break;
        case 5 :
            menu_cartridge();
        break;
        case 6 :
            menu_cotton();
        break;
        case 7 :
            menu_liquid();
        break;
        default :
            goto menu;
        break;
        }

        cout << "Berapa banyak yang ingin dibeli : ";
        cin >> total;
        total_akhir = harga_vape*total;
        cout << "Total : " << total_akhir << endl;
        cout << "Bayar : ";
        cin >> bayar;
        kembalian = bayar-total_akhir;
        cout << "Kembalian : " << kembalian << endl;

        cout << "Apakah anda ingin kembali ke menu utama (Y/T) : ";
        cin >> loop;
        if(loop=='y'||loop=='Y'){
            system("cls");
            goto menu;
        }else
            exit(0);



}



void menu_utama(){
    pilihan utama;

    utama.opsi[0] = "Device";
    utama.opsi[1] = "Atomizer";
    utama.opsi[2] = "Battery";
    utama.opsi[3] = "Coil";
    utama.opsi[4] = "Cartridge";
    utama.opsi[5] = "Cotton";
    utama.opsi[6] = "Liquid";

    menu :
    cout << "========== DeVape =========\n";
    for(int i=0; i<=6; i++){
        cout << i+1 << "." << " " << utama.opsi [i] << endl;
    }
    cout << "===========================\n";
    cout << "Apa yang anda cari (1-7) : ";

}



void menu_device(){
    pilihan device;

    device.opsi[0] = "MOD";
    device.opsi[1] = "POD";
    device.opsi[2] = "AIO";


    cout << "======= Device =======\n";
    for(int i=0; i<=2; i++){
        cout << i+1 << "." << " " << device.opsi [i] << endl;
    }
    cout << "======================\n";
    cout << "Apa yang anda cari (1-3) : ";

}



void menu_mod(){
    int plh;
    pilihan mod;

    mod.opsi[0] = "DRAG 3 ................ Rp. 380.000";
    mod.opsi[1] = "R233 .................. Rp. 560.000";
    mod.opsi[2] = "Thelema solo .......... Rp. 600.000";
    mod.opsi[3] = "Hexohm V3 ............. Rp. 3.100.000";
    mod.opsi[4] = "Druga Foxy ............ Rp. 740.000";
    mod.opsi[5] = "Thelema centaurus ..... Rp. 485.000";

    cout << "=================== MOD ==================\n";
    for(int i=0; i<=5; i++){
        cout << i+1 << "." << " " << mod.opsi [i] << endl;
    }
    cout << "==========================================\n";
    cout << "Apa yang anda cari (1-6) : ";
    cin >> plh;
    if(plh== 1){
        harga_vape = 380000;

    }else if(plh == 2){
        harga_vape = 560000;

    }else if(plh == 3){
        harga_vape = 600000;

    }else if(plh == 4){
        harga_vape = 3100000;

    }else if(plh == 5){
        harga_vape = 740000;

    }else if(plh == 6){
        harga_vape = 485000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}


void menu_pod(){
    int plh;
    pilihan pod;

    pod.opsi[0] = "Caliburn GK2 .......... Rp. 380.000";
    pod.opsi[1] = "KUY V2 ................ Rp. 560.000";
    pod.opsi[2] = "Vinci POD ............. Rp. 600.000";
    pod.opsi[3] = "Ursa Nano ............. Rp. 210.000";
    pod.opsi[4] = "JUUL .................. Rp. 340.000";

    cout << "================== POD =================\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << pod.opsi [i] << endl;
    }
    cout << "========================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 380000;

    }else if(plh == 2){
        harga_vape = 560000;

    }else if(plh == 3){
        harga_vape = 600000;

    }else if(plh == 4){
        harga_vape = 210000;

    }else if(plh == 5){
        harga_vape = 340000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}


void menu_aio(){
    int plh;
    pilihan aio;

    aio.opsi[0] = "Vinci AIR ............. Rp. 340.000";
    aio.opsi[1] = "Oxva origin ........... Rp. 374.000";
    aio.opsi[2] = "Pulse AIO 5 ........... Rp. 1.384.000";
    aio.opsi[3] = "Beeper ................ Rp. 2.200.000";
    aio.opsi[4] = "Manto AIO Plus ........ Rp. 310.000";

    cout << "=================== AIO ==================\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << aio.opsi [i] << endl;
    }
    cout << "==========================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 340000;

    }else if(plh == 2){
        harga_vape = 374000;

    }else if(plh == 3){
        harga_vape = 1384000;

    }else if(plh == 4){
        harga_vape = 2200000;

    }else if(plh == 5){
        harga_vape = 310000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}


void menu_atomizer(){
    int plh;
    pilihan atomizer;

    atomizer.opsi[0] = "RDA";
    atomizer.opsi[1] = "RTA";

    cout << "======= Atomizer =======\n";
    for(int i=0; i<=1; i++){
        cout << i+1 << "." << " " << atomizer.opsi [i] << endl;
    }
    cout << "========================\n";
    cout << "Apa yang anda cari (1-2) : ";

}


void menu_rda(){
    int plh;
    pilihan rda;

    rda.opsi[0] = "An RDA ................ Rp. 600.000";
    rda.opsi[1] = "DROP V1.5 ............. Rp. 348.000";
    rda.opsi[2] = "Nitrous ............... Rp. 340.000";
    rda.opsi[3] = "Reload s .............. Rp. 900.000";
    rda.opsi[4] = "Artha V2 .............. Rp. 545.000";

    cout << "================== RDA =================\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << rda.opsi [i] << endl;
    }
    cout << "========================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 600000;

    }else if(plh == 2){
        harga_vape = 348000;

    }else if(plh == 3){
        harga_vape = 340000;

    }else if(plh == 4){
        harga_vape = 900000;

    }else if(plh == 5){
        harga_vape = 545000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }
}


void menu_rta(){
    int plh;
    pilihan rta;

    rta.opsi[0] = "Oxva Arbiter Solo ..... Rp. 320.000";
    rta.opsi[1] = "Wotofo Troll .......... Rp. 198.000";
    rta.opsi[2] = "Ofrf Gear ............. Rp. 280.000";
    rta.opsi[3] = "Zeus X ................ Rp. 378.000";
    rta.opsi[4] = "Dovpo Blotto .......... Rp. 330.000";

    cout << "================== RTA =================\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << rta.opsi [i] << endl;
    }
    cout << "========================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 320000;

    }else if(plh == 2){
        harga_vape = 198000;

    }else if(plh == 3){
        harga_vape = 280000;

    }else if(plh == 4){
        harga_vape = 378000;

    }else if(plh == 5){
        harga_vape = 330000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}


void menu_battery(){
    int plh;
    pilihan battery;

    battery.opsi[0] = "Sony VTC 7 18650 3500mAh ..... Rp. 136.000";
    battery.opsi[1] = "VRK 18650 3500mAh ............ Rp. 245.000";
    battery.opsi[2] = "Kdest 21700 5000mAh .......... Rp. 111.000";
    battery.opsi[3] = "Herculess 18650 3000mAh ...... Rp. 56.000";
    battery.opsi[4] = "AWT 18650 2400mAh ............ Rp. 116.000";

    cout << "================== BATTERY ==================\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << battery.opsi [i] << endl;
    }
    cout << "=============================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 136000;

    }else if(plh == 2){
        harga_vape = 245000;

    }else if(plh == 3){
        harga_vape = 111000;

    }else if(plh == 4){
        harga_vape = 60000;

    }else if(plh == 5){
        harga_vape = 116000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }


}


void menu_coil(){
    int plh;
    pilihan coil;

    coil.opsi[0] = "Super Sonic ........... Rp. 65.000";
    coil.opsi[1] = "Noir .................. Rp. 30.000";
    coil.opsi[2] = "Garilo ................ Rp. 55.000";
    coil.opsi[3] = "Wuhan ................. Rp. 43.000";
    coil.opsi[4] = "Candu.................. Rp. 33.000";

    cout << "================== COIL ==============\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << coil.opsi [i] << endl;
    }
    cout << "======================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 65000;

    }else if(plh == 2){
        harga_vape = 30000;

    }else if(plh == 3){
        harga_vape = 55000;

    }else if(plh == 4){
        harga_vape = 43000;

    }else if(plh == 5){
        harga_vape = 33000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}


void menu_cartridge(){
    int plh;
    pilihan cartridge;

    cartridge.opsi[0] = "Caliburn G ................. Rp. 27.000";
    cartridge.opsi[1] = "KUY Cartridge .............. Rp. 33.000";
    cartridge.opsi[2] = "Vinci POD Cartridge ........ Rp. 31.000";
    cartridge.opsi[3] = "URSA Nano Cartrdige ........ Rp. 30.000";
    cartridge.opsi[4] = "Foom Cartrdige ............. Rp. 22.000";

    cout << "================== CARTRIDGE ==============\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << cartridge.opsi [i] << endl;
    }
    cout << "===========================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 27000;

    }else if(plh == 2){
        harga_vape = 33000;

    }else if(plh == 3){
        harga_vape = 31000;

    }else if(plh == 4){
        harga_vape = 30000;

    }else if(plh == 5){
        harga_vape = 22000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}



void menu_cotton(){
    int plh;
    pilihan cotton;

    cotton.opsi[0] = "Atomix Premium Blend ....... Rp. 31.000";
    cotton.opsi[1] = "Holy Fiber ................. Rp. 35.000";
    cotton.opsi[2] = "Cloud 9 100cm .............. Rp. 65.000";
    cotton.opsi[3] = "Cotton Bacon Prime ......... Rp. 50.000";
    cotton.opsi[4] = "Kendo Gold Edition ......... Rp. 60.000";

    cout << "=================== COTTON ===============\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << cotton.opsi [i] << endl;
    }
    cout << "==========================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 31000;

    }else if(plh == 2){
        harga_vape = 35000;

    }else if(plh == 3){
        harga_vape = 65000;

    }else if(plh == 4){
        harga_vape = 50000;

    }else if(plh == 5){
        harga_vape = 60000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}

void menu_liquid(){
    int plh;
    pilihan liquid;

    liquid.opsi[0] = "Banana Licious ............. Rp. 120.000";
    liquid.opsi[1] = "Oat Drips V1 ............... Rp. 130.000";
    liquid.opsi[2] = "Blackwood Masterpiece ...... Rp. 100.000";
    liquid.opsi[3] = "ICE Berg ................... Rp. 110.000";
    liquid.opsi[4] = "Whale Dream ................ Rp. 120.000";

    cout << "=================== LIQUID ================\n";
    for(int i=0; i<=4; i++){
        cout << i+1 << "." << " " << liquid.opsi [i] << endl;
    }
    cout << "===========================================\n";
    cout << "Apa yang anda cari (1-5) : ";
    cin >> plh;
    if(plh == 1){
        harga_vape = 120000;

    }else if(plh == 2){
        harga_vape = 130000;

    }else if(plh == 3){
        harga_vape = 100000;

    }else if(plh == 4){
        harga_vape = 110000;

    }else if(plh == 5){
        harga_vape = 120000;

    }else{
        cout << "Pilihan anda tidak ada dalam daftar";
        exit(0);
    }

}
