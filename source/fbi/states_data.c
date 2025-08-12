#include "states_data.h"

#include "stddef.h"

// 日本地区
State jp_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "东京 | Tokyo (02)"},
        {"03", "北海道 | Hokkaido (03)"},
        {"04", "青森县 | Aomori (04)"},
        {"05", "岩手县 | Iwate (05)"},
        {"06", "宫城县 | Miyagi (06)"},
        {"07", "秋田县 | Akita (07)"},
        {"08", "山形县 | Yamagata (08)"},
        {"09", "福岛县 | Fukushima (09)"},
        {"0A", "茨城县 | Ibaraki (0A)"},
        {"0B", "栃木县 | Tochigi (0B)"},
        {"0C", "群马县 | Gunma (0C)"},
        {"0D", "埼玉县 | Saitama (0D)"},
        {"0E", "千叶县 | Chiba (0E)"},
        {"0F", "神奈川县 | Kanagawa (0F)"},
        {"10", "富山县 | Toyama (10)"},
        {"11", "石川县 | Ishikawa (11)"},
        {"12", "福井县 | Fukui (12)"},
        {"13", "山梨县 | Yamanashi (13)"},
        {"14", "长野县 | Nagano (14)"},
        {"15", "新潟县 | Niigata (15)"},
        {"16", "岐阜县 | Gifu (16)"},
        {"17", "静冈县 | Shizuoka (17)"},
        {"18", "爱知县 | Aichi (18)"},
        {"19", "三重县 | Mie (19)"},
        {"1A", "滋贺县 | Shiga (1A)"},
        {"1B", "京都府 | Kyoto (1B)"},
        {"1C", "大阪府 | Osaka (1C)"},
        {"1D", "兵库县 | Hyogo (1D)"},
        {"1E", "奈良县 | Nara (1E)"},
        {"1F", "和歌山县 | Wakayama (1F)"},
        {"20", "鸟取县 | Tottori (20)"},
        {"21", "岛根县 | Shimane (21)"},
        {"22", "冈山县 | Okayama (22)"},
        {"23", "广岛县 | Hiroshima (23)"},
        {"24", "山口县 | Yamaguchi (24)"},
        {"25", "德岛县 | Tokushima (25)"},
        {"26", "香川县 | Kagawa (26)"},
        {"27", "爱媛县 | Ehime (27)"},
        {"28", "高知县 | Kochi (28)"},
        {"29", "福冈县 | Fukuoka (29)"},
        {"2A", "佐贺县 | Saga (2A)"},
        {"2B", "长崎县 | Nagasaki (2B)"},
        {"2C", "熊本县 | Kumamoto (2C)"},
        {"2D", "大分县 | Oita (2D)"},
        {"2E", "宫崎县 | Miyazaki (2E)"},
        {"2F", "鹿儿岛县 | Kagoshima (2F)"},
        {"30", "冲绳县 | Okinawa (30)"}
};

// 安圭拉地区
State ai_states[] = {
        {"01", "安圭拉 | Anguilla (01)"}
};

// 安提瓜和巴布达地区
State ag_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "圣约翰 | Saint John (02)"},
        {"03", "巴布达 | Barbuda (03)"},
        {"04", "圣乔治 | Saint George (04)"},
        {"05", "圣玛丽 | Saint Mary (05)"},
        {"06", "圣保罗 | Saint Paul (06)"},
        {"07", "圣彼得 | Saint Peter (07)"},
        {"08", "圣菲利普 | Saint Philip (08)"}
};

// 阿根廷地区
State ar_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "联邦区 | Distrito Federal (02)"},
        {"03", "布宜诺斯艾利斯 | Buenos Aires (03)"},
        {"04", "卡塔马卡 | Catamarca (04)"},
        {"05", "查科 | Chaco (05)"},
        {"06", "丘布特 | Chubut (06)"},
        {"07", "科尔多瓦 | Córdoba (07)"},
        {"08", "科连特斯 | Corrientes (08)"},
        {"09", "恩特雷里奥斯 | Entre Ríos (09)"},
        {"0A", "福莫萨 | Formosa (0A)"},
        {"0B", "胡胡伊 | Jujuy (0B)"},
        {"0C", "拉潘帕 | La Pampa (0C)"},
        {"0D", "拉里奥哈 | La Rioja (0D)"},
        {"0E", "门多萨 | Mendoza (0E)"},
        {"0F", "米西奥内斯 | Misiones (0F)"},
        {"10", "内乌肯 | Neuquén (10)"},
        {"11", "里奥内格罗 | Río Negro (11)"},
        {"12", "萨尔塔 | Salta (12)"},
        {"13", "圣胡安 | San Juan (13)"},
        {"14", "圣路易斯 | San Luis (14)"},
        {"15", "圣克鲁斯 | Santa Cruz (15)"},
        {"16", "圣菲 | Santa Fe (16)"},
        {"17", "圣地亚哥-德尔埃斯特罗 | Santiago del Estero (17)"},
        {"18", "火地岛、南极和南大西洋群岛 | Tierra del Fuego, Antártida e Islas del Atlántico Sur (18)"},
        {"19", "图库曼 | Tucumán (19)"}
};

// 阿鲁巴地区
State aw_states[] = {
        {"01", "阿鲁巴 | Aruba (01)"}
};

// 巴哈马地区
State bs_states[] = {
        {"01", "巴哈马 | Bahamas (01)"}
};

// 巴巴多斯地区
State bb_states[] = {
        {"01", "巴巴多斯 | Barbados (01)"}
};

// 伯利兹地区
State bz_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "卡约区 | Cayo (02)"},
        {"03", "伯利兹区 | Belize (03)"},
        {"04", "科罗萨尔区 | Corozal (04)"},
        {"05", "奥兰治沃克区 | Orange Walk (05)"},
        {"06", "斯坦克里克区 | Stann Creek (06)"},
        {"07", "托莱多区 | Toledo (07)"}
};

// 玻利维亚地区
State bo_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "拉巴斯 | La Paz (02)"},
        {"03", "丘基萨卡 | Chuquisaca (03)"},
        {"04", "科恰班巴 | Cochabamba (04)"},
        {"05", "贝尼 | El Beni (05)"},
        {"06", "奥鲁罗 | Oruro (06)"},
        {"07", "潘多 | Pando (07)"},
        {"08", "波托西 | Potosí (08)"},
        {"09", "圣克鲁斯 | Santa Cruz (09)"},
        {"0A", "塔里哈 | Tarija (0A)"}
};

// 巴西地区
State br_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "联邦区 | Distrito Federal (02)"},
        {"03", "阿克里州 | Acre (03)"},
        {"04", "阿拉戈斯州 | Alagoas (04)"},
        {"05", "阿马帕州 | Amapá (05)"},
        {"06", "亚马孙州 | Amazonas (06)"},
        {"07", "巴伊亚州 | Bahia (07)"},
        {"08", "塞阿拉州 | Ceará (08)"},
        {"09", "圣埃斯皮里图州 | Espírito Santo (09)"},
        {"0A", "南马托格罗索州 | Mato Grosso do Sul (0A)"},
        {"0B", "马拉尼昂州 | Maranhão (0B)"},
        {"0C", "马托格罗索州 | Mato Grosso (0C)"},
        {"0D", "米纳斯吉拉斯州 | Minas Gerais (0D)"},
        {"0E", "帕拉州 | Pará (0E)"},
        {"0F", "帕拉伊巴州 | Paraíba (0F)"},
        {"10", "巴拉那州 | Paraná (10)"},
        {"11", "皮奥伊州 | Piauí (11)"},
        {"12", "里约热内卢州 | Rio de Janeiro (12)"},
        {"13", "北里奥格兰德州 | Rio Grande do Norte (13)"},
        {"14", "南里奥格兰德州 | Rio Grande do Sul (14)"},
        {"15", "朗多尼亚州 | Rondônia (15)"},
        {"16", "罗赖马州 | Roraima (16)"},
        {"17", "圣卡塔琳娜州 | Santa Catarina (17)"},
        {"18", "圣保罗州 | São Paulo (18)"},
        {"19", "塞尔希培州 | Sergipe (19)"},
        {"1A", "戈亚斯州 | Goiás (1A)"},
        {"1B", "伯南布哥州 | Pernambuco (1B)"},
        {"1C", "托坎廷斯州 | Tocantins (1C)"}
};

// 英属维尔京群岛地区
State vg_states[] = {
        {"01", "英属维尔京群岛 | British Virgin Islands (01)"}
};

// 加拿大地区
State ca_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "安大略省 | Ontario (02)"},
        {"03", "阿尔伯塔省 | Alberta (03)"},
        {"04", "不列颠哥伦比亚省 | British Columbia (04)"},
        {"05", "马尼托巴省 | Manitoba (05)"},
        {"06", "新不伦瑞克省 | New Brunswick (06)"},
        {"07", "纽芬兰与拉布拉多省 | Newfoundland and Labrador (07)"},
        {"08", "新斯科舍省 | Nova Scotia (08)"},
        {"09", "爱德华王子岛省 | Prince Edward Island (09)"},
        {"0A", "魁北克省 | Quebec (0A)"},
        {"0B", "萨斯喀彻温省 | Saskatchewan (0B)"},
        {"0C", "育空地区 | Yukon (0C)"},
        {"0D", "西北地区 | Northwest Territories (0D)"},
        {"0E", "努纳武特地区 | Nunavut (0E)"}
};

// 开曼群岛地区
State ky_states[] = {
        {"01", "开曼群岛 | Cayman Islands (01)"}
};

// 智利地区
State cl_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "大都会区 | Región Metropolitana (02)"},
        {"03", "瓦尔帕莱索大区 | Valparaíso (03)"},
        {"04", "艾森大区 | Aisén del General Carlos Ibáñez del Campo (04)"},
        {"05", "安托法加斯塔大区 | Antofagasta (05)"},
        {"06", "阿劳卡尼亚大区 | Araucanía (06)"},
        {"07", "阿塔卡马大区 | Atacama (07)"},
        {"08", "比奥比奥大区 | Bío-Bío (08)"},
        {"09", "科金博大区 | Coquimbo (09)"},
        {"0A", "奥希金斯大区 | Libertador General Bernardo O'Higgins (0A)"},
        {"0B", "湖大区 | Los Lagos (0B)"},
        {"0C", "麦哲伦-智利南极大区 | Magallanes y Antártica Chilena (0C)"},
        {"0D", "马乌莱大区 | Maule (0D)"},
        {"0E", "塔拉帕卡大区 | Tarapacá (0E)"}
};

// 哥伦比亚地区
State co_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "首都区 | Distrito Capital (02)"},
        {"03", "昆迪纳马卡省 | Cundinamarca (03)"},
        {"04", "亚马孙省 | Amazonas (04)"},
        {"05", "安蒂奥基亚省 | Antioquia (05)"},
        {"06", "阿劳卡省 | Arauca (06)"},
        {"07", "大西洋省 | Atlántico (07)"},
        {"08", "玻利瓦尔省 | Bolívar (08)"},
        {"09", "博亚卡省 | Boyacá (09)"},
        {"0A", "卡尔达斯省 | Caldas (0A)"},
        {"0B", "卡克塔省 | Caquetá (0B)"},
        {"0C", "考卡省 | Cauca (0C)"},
        {"0D", "塞萨尔省 | Cesar (0D)"},
        {"0E", "乔科省 | Chocó (0E)"},
        {"0F", "科尔多瓦省 | Córdoba (0F)"},
        {"10", "瓜维亚雷省 | Guaviare (10)"},
        {"11", "瓜伊尼亚省 | Guainía (11)"},
        {"12", "乌伊拉省 | Huila (12)"},
        {"13", "瓜希拉省 | La Guajira (13)"},
        {"14", "马格达莱纳省 | Magdalena (14)"},
        {"15", "梅塔省 | Meta (15)"},
        {"16", "纳里尼奥省 | Nariño (16)"},
        {"17", "北桑坦德省 | Norte de Santander (17)"},
        {"18", "普图马约省 | Putumayo (18)"},
        {"19", "金迪奥省 | Quindío (19)"},
        {"1A", "里萨拉尔达省 | Risaralda (1A)"},
        {"1B", "圣安德烈斯-普罗维登西亚和圣卡塔利娜群岛 | Archipiélago de San Andrés, Providencia y Santa Catalina (1B)"},
        {"1C", "桑坦德省 | Santander (1C)"},
        {"1D", "苏克雷省 | Sucre (1D)"},
        {"1E", "托利马省 | Tolima (1E)"},
        {"1F", "考卡山谷省 | Valle del Cauca (1F)"},
        {"20", "沃佩斯省 | Vaupés (20)"},
        {"21", "比查达省 | Vichada (21)"},
        {"22", "卡萨纳雷省 | Casanare (22)"}
};

// 哥斯达黎加地区
State cr_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "圣何塞省 | San José (02)"},
        {"03", "阿拉胡埃拉省 | Alajuela (03)"},
        {"04", "卡塔戈省 | Cartago (04)"},
        {"05", "瓜纳卡斯特省 | Guanacaste (05)"},
        {"06", "埃雷迪亚省 | Heredia (06)"},
        {"07", "利蒙省 | Limón (07)"},
        {"08", "蓬塔雷纳斯省 | Puntarenas (08)"}
};

// 多米尼克地区
State dm_states[] = {
        {"01", "多米尼克 | Dominica (01)"}
};

// 多米尼加共和国地区
State do_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "国家区 | Distrito Nacional (02)"},
        {"03", "阿苏阿省 | Azua (03)"},
        {"04", "巴奥鲁科省 | Baoruco (04)"},
        {"05", "巴拉奥纳省 | Barahona (05)"},
        {"06", "达哈翁省 | Dajabón (06)"},
        {"07", "杜阿尔特省 | Duarte (07)"},
        {"08", "埃斯派亚特省 | Espaillat (08)"},
        {"09", "独立省 | Independencia (09)"},
        {"0A", "拉阿尔塔格拉西亚省 | La Altagracia (0A)"},
        {"0B", "埃利亚斯皮尼亚省 | Elías Piña (0B)"},
        {"0C", "拉罗马纳省 | La Romana (0C)"},
        {"0D", "玛丽亚·特立尼达·桑切斯省 | María Trinidad Sánchez (0D)"},
        {"0E", "蒙特克里斯蒂省 | Monte Cristi (0E)"},
        {"0F", "佩德纳莱斯省 | Pedernales (0F)"},
        {"10", "佩拉维亚省 | Peravia (10)"},
        {"11", "银港省 | Puerto Plata (11)"},
        {"12", "萨尔塞多省 | Salcedo (12)"},
        {"13", "萨马纳省 | Samaná (13)"},
        {"14", "桑切斯·拉米雷斯省 | Sánchez Ramírez (14)"},
        {"15", "圣胡安省 | San Juan (15)"},
        {"16", "圣佩德罗·德马科里斯省 | San Pedro de Macorís (16)"},
        {"17", "圣地亚哥省 | Santiago (17)"},
        {"18", "圣地亚哥·罗德里格斯省 | Santiago Rodríguez (18)"},
        {"19", "瓦尔韦德省 | Valverde (19)"},
        {"1A", "埃尔塞沃省 | El Seíbo (1A)"},
        {"1B", "阿托马约尔省 | Hato Mayor (1B)"},
        {"1C", "拉维加省 | La Vega (1C)"},
        {"1D", "蒙塞尼奥尔·努埃尔省 | Monseñor Nouel (1D)"},
        {"1E", "蒙特普拉塔省 | Monte Plata (1E)"},
        {"1F", "圣克里斯托瓦尔省 | San Cristóbal (1F)"}
};

// 厄瓜多尔地区
State ec_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "皮钦查省 | Pichincha (02)"},
        {"03", "加拉帕戈斯省 | Galápagos (03)"},
        {"04", "阿苏艾省 | Azuay (04)"},
        {"05", "玻利瓦尔省 | Bolívar (05)"},
        {"06", "卡尼亚尔省 | Cañar (06)"},
        {"07", "卡尔奇省 | Carchi (07)"},
        {"08", "钦博拉索省 | Chimborazo (08)"},
        {"09", "科托帕希省 | Cotopaxi (09)"},
        {"0A", "埃尔奥罗省 | El Oro (0A)"},
        {"0B", "埃斯梅拉达斯省 | Esmeraldas (0B)"},
        {"0C", "瓜亚斯省 | Guayas (0C)"},
        {"0D", "因巴布拉省 | Imbabura (0D)"},
        {"0E", "洛哈省 | Loja (0E)"},
        {"0F", "洛斯里奥斯省 | Los Ríos (0F)"},
        {"10", "马纳比省 | Manabí (10)"},
        {"11", "莫罗纳-圣地亚哥省 | Morona-Santiago (11)"},
        {"12", "帕斯塔萨省 | Pastaza (12)"},
        {"13", "通古拉瓦省 | Tungurahua (13)"},
        {"14", "萨莫拉-钦奇佩省 | Zamora-Chinchipe (14)"},
        {"15", "苏昆比奥斯省 | Sucumbios (15)"},
        {"16", "纳波省 | Napo (16)"},
        {"17", "奥雷利亚纳省 | Orellana (17)"},
        {"18", "圣埃伦娜省 | Santa Elena (18)"},
        {"19", "圣多明各-德洛斯查奇拉斯省 | Santo Domingo de los Tsáchilas (19)"}
};

// 萨尔瓦多地区
State sv_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "圣萨尔瓦多省 | San Salvador (02)"},
        {"03", "阿瓦查潘省 | Ahuachapán (03)"},
        {"04", "卡瓦尼亚斯省 | Cabañas (04)"},
        {"05", "查拉特南戈省 | Chalatenango (05)"},
        {"06", "库斯卡特兰省 | Cuscatlán (06)"},
        {"07", "拉利伯塔德省 | La Libertad (07)"},
        {"08", "拉巴斯省 | La Paz (08)"},
        {"09", "拉乌尼翁省 | La Unión (09)"},
        {"0A", "莫拉桑省 | Morazán (0A)"},
        {"0B", "圣米格尔省 | San Miguel (0B)"},
        {"0C", "圣安娜省 | Santa Ana (0C)"},
        {"0D", "圣维森特省 | San Vicente (0D)"},
        {"0E", "松索纳特省 | Sonsonate (0E)"},
        {"0F", "乌苏卢坦省 | Usulután (0F)"}
};

// 法属圭亚那地区
State gf_states[] = {
        {"01", "法属圭亚那 | French Guiana (01)"}
};

// 格林纳达地区
State gd_states[] = {
        {"01", "格林纳达 | Grenada (01)"}
};

// 瓜德罗普地区
State gp_states[] = {
        {"01", "瓜德罗普 | Guadeloupe (01)"}
};

// 危地马拉地区
State gt_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "危地马拉省 | Guatemala (02)"},
        {"03", "上韦拉帕斯省 | Alta Verapaz (03)"},
        {"04", "下韦拉帕斯省 | Baja Verapaz (04)"},
        {"05", "奇马尔特南戈省 | Chimaltenango (05)"},
        {"06", "奇基穆拉省 | Chiquimula (06)"},
        {"07", "埃尔普罗格雷索省 | El Progreso (07)"},
        {"08", "埃斯昆特拉省 | Escuintla (08)"},
        {"09", "韦韦特南戈省 | Huehuetenango (09)"},
        {"0A", "伊萨瓦尔省 | Izabal (0A)"},
        {"0B", "哈拉帕省 | Jalapa (0B)"},
        {"0C", "胡蒂亚帕省 | Jutiapa (0C)"},
        {"0D", "佩滕省 | Petén (0D)"},
        {"0E", "克萨尔特南戈省 | Quetzaltenango (0E)"},
        {"0F", "基切省 | Quiché (0F)"},
        {"10", "雷塔卢莱乌省 | Retalhuleu (10)"},
        {"11", "萨卡特佩克斯省 | Sacatepéquez (11)"},
        {"12", "圣马科斯省 | San Marcos (12)"},
        {"13", "圣罗莎省 | Santa Rosa (13)"},
        {"14", "索洛拉省 | Sololá (14)"},
        {"15", "苏奇特佩克斯省 | Suchitepéquez (15)"},
        {"16", "托托尼卡潘省 | Totonicapán (16)"},
        {"17", "萨卡帕省 | Zacapa (17)"}
};

// 圭亚那地区
State gy_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "德梅拉拉-马海卡区 | Demerara-Mahaica (02)"},
        {"03", "巴里马-瓦伊尼区 | Barima-Waini (03)"},
        {"04", "库尤尼-马扎鲁尼区 | Cuyuni-Mazaruni (04)"},
        {"05", "东伯比斯-科兰太因区 | East Berbice-Corentyne (05)"},
        {"06", "埃塞奎博群岛-西德梅拉拉区 | Essequibo Islands-West Demerara (06)"},
        {"07", "马海卡-伯比斯区 | Mahaica-Berbice (07)"},
        {"08", "波默伦-苏佩纳姆区 | Pomeroon-Supenaam (08)"},
        {"09", "波塔罗-锡帕鲁尼区 | Potaro-Siparuni (09)"},
        {"0A", "上德梅拉拉-伯比斯区 | Upper Demerara-Berbice (0A)"},
        {"0B", "上塔库图-上埃塞奎博区 | Upper Takutu-Upper Essequibo (0B)"}
};

// 海地地区
State ht_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "西部省 | Ouest (02)"},
        {"03", "西北省 | Nord-Ouest (03)"},
        {"04", "阿蒂博尼特省 | Artibonite (04)"},
        {"05", "中央省 | Centre (05)"},
        {"06", "大湾省 | Grand'Anse (06)"},
        {"07", "北部省 | Nord (07)"},
        {"08", "东北省 | Nord-Est (08)"},
        {"09", "南部省 | Sud (09)"},
        {"0A", "东南省 | Sud-Est (0A)"},
        {"0B", "尼普斯省 | Nippes (0B)"}
};

// 洪都拉斯地区
State hn_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "弗朗西斯科-莫拉桑省 | Francisco Morazán (02)"},
        {"03", "阿特兰蒂达省 | Atlántida (03)"},
        {"04", "乔卢特卡省 | Choluteca (04)"},
        {"05", "科隆省 | Colón (05)"},
        {"06", "科马亚瓜省 | Comayagua (06)"},
        {"07", "科潘省 | Copán (07)"},
        {"08", "科尔特斯省 | Cortés (08)"},
        {"09", "埃尔帕拉伊索省 | El Paraíso (09)"},
        {"0A", "格拉西亚斯-阿迪奥斯省 | Gracias a Dios (0A)"},
        {"0B", "因蒂布卡省 | Intibucá (0B)"},
        {"0C", "海湾群岛省 | Islas de la Bahía (0C)"},
        {"0D", "拉巴斯省 | La Paz (0D)"},
        {"0E", "伦皮拉省 | Lempira (0E)"},
        {"0F", "奥科特佩克省 | Ocotepeque (0F)"},
        {"10", "奥兰乔省 | Olancho (10)"},
        {"11", "圣巴巴拉省 | Santa Bárbara (11)"},
        {"12", "山谷省 | Valle (12)"},
        {"13", "约罗省 | Yoro (13)"}
};

// 牙买加地区
State jm_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "圣托马斯区 | Saint Thomas (02)"},
        {"03", "克拉伦登区 | Clarendon (03)"},
        {"04", "汉诺威区 | Hanover (04)"},
        {"05", "曼彻斯特区 | Manchester (05)"},
        {"06", "波特兰区 | Portland (06)"},
        {"07", "圣安德鲁区 | Saint Andrew (07)"},
        {"08", "圣安区 | Saint Ann (08)"},
        {"09", "圣凯瑟琳区 | Saint Catherine (09)"},
        {"0A", "圣伊丽莎白区 | Saint Elizabeth (0A)"},
        {"0B", "圣詹姆斯区 | Saint James (0B)"},
        {"0C", "圣玛丽区 | Saint Mary (0C)"},
        {"0D", "特雷拉wny区 | Trelawny (0D)"},
        {"0E", "西摩兰区 | Westmoreland (0E)"},
        {"0F", "金斯敦区 | Kingston (0F)"}
};

// 马提尼克地区
State mq_states[] = {
        {"01", "马提尼克 | Martinique (01)"}
};

// 墨西哥地区
State mx_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "联邦区 | Distrito Federal (02)"},
        {"03", "阿瓜斯卡连特斯州 | Aguascalientes (03)"},
        {"04", "下加利福尼亚州 | Baja California (04)"},
        {"05", "南下加利福尼亚州 | Baja California Sur (05)"},
        {"06", "坎佩切州 | Campeche (06)"},
        {"07", "恰帕斯州 | Chiapas (07)"},
        {"08", "奇瓦瓦州 | Chihuahua (08)"},
        {"09", "科阿韦拉州 | Coahuila de Zaragoza (09)"},
        {"0A", "科利马州 | Colima (0A)"},
        {"0B", "杜兰戈州 | Durango (0B)"},
        {"0C", "瓜纳华托州 | Guanajuato (0C)"},
        {"0D", "格雷罗州 | Guerrero (0D)"},
        {"0E", "伊达尔戈州 | Hidalgo (0E)"},
        {"0F", "哈利斯科州 | Jalisco (0F)"},
        {"10", "墨西哥州 | México (10)"},
        {"11", "米却肯州 | Michoacán de Ocampo (11)"},
        {"12", "莫雷洛斯州 | Morelos (12)"},
        {"13", "纳亚里特州 | Nayarit (13)"},
        {"14", "新莱昂州 | Nuevo León (14)"},
        {"15", "瓦哈卡州 | Oaxaca (15)"},
        {"16", "普埃布拉州 | Puebla (16)"},
        {"17", "克雷塔罗州 | Querétaro de Arteaga (17)"},
        {"18", "金塔纳罗奥州 | Quintana Roo (18)"},
        {"19", "圣路易斯波托西州 | San Luis Potosí (19)"},
        {"1A", "锡那罗亚州 | Sinaloa (1A)"},
        {"1B", "索诺拉州 | Sonora (1B)"},
        {"1C", "塔巴斯科州 | Tabasco (1C)"},
        {"1D", "塔毛利帕斯州 | Tamaulipas (1D)"},
        {"1E", "特拉斯卡拉州 | Tlaxcala (1E)"},
        {"1F", "韦拉克鲁斯州 | Veracruz-Llave (1F)"},
        {"20", "尤卡坦州 | Yucatán (20)"},
        {"21", "萨卡特卡斯州 | Zacatecas (21)"}
};

// 蒙特塞拉特地区
State ms_states[] = {
        {"01", "蒙特塞拉特 | Montserrat (01)"}
};

// 荷属安的列斯地区
State an_states[] = {
        {"01", "荷属安的列斯 | Netherlands Antilles (01)"}
};

// 尼加拉瓜地区
State ni_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "马那瓜省 | Managua (02)"},
        {"03", "博阿科省 | Boaco (03)"},
        {"04", "卡拉佐省 | Carazo (04)"},
        {"05", "奇南德加省 | Chinandega (05)"},
        {"06", "琼塔莱斯省 | Chontales (06)"},
        {"07", "埃斯特利省 | Estelí (07)"},
        {"08", "格拉纳达省 | Granada (08)"},
        {"09", "希诺特加省 | Jinotega (09)"},
        {"0A", "莱昂省 | León (0A)"},
        {"0B", "马德里斯省 | Madriz (0B)"},
        {"0C", "马萨亚省 | Masaya (0C)"},
        {"0D", "马塔加尔帕省 | Matagalpa (0D)"},
        {"0E", "新塞哥维亚省 | Nueva Segovia (0E)"},
        {"0F", "圣胡安河省 | Río San Juan (0F)"},
        {"10", "里瓦斯省 | Rivas (10)"},
        {"11", "北大西洋自治区 | Atlántico Norte (11)"},
        {"12", "南大西洋自治区 | Atlántico Sur (12)"}
};

// 巴拿马地区
State pa_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "巴拿马省 | Panamá (02)"},
        {"03", "博卡斯德尔托罗省 | Bocas del Toro (03)"},
        {"04", "奇里基省 | Chiriquí (04)"},
        {"05", "科克莱省 | Coclé (05)"},
        {"06", "科隆省 | Colón (06)"},
        {"07", "达连省 | Darién (07)"},
        {"08", "埃雷拉省 | Herrera (08)"},
        {"09", "洛斯桑托斯省 | Los Santos (09)"},
        {"0A", "库纳雅拉自治区 | Kuna Yala (0A)"},
        {"0B", "贝拉瓜斯省 | Veraguas (0B)"}
};

// 巴拉圭地区
State py_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "中央省 | Central (02)"},
        {"03", "上巴拉那省 | Alto Paraná (03)"},
        {"04", "阿曼拜省 | Amambay (04)"},
        {"05", "卡瓜苏省 | Caaguazú (05)"},
        {"06", "卡萨拉省 | Caazapá (06)"},
        {"07", "康塞普西翁省 | Concepción (07)"},
        {"08", "科迪勒拉省 | Cordillera (08)"},
        {"09", "瓜伊拉省 | Guairá (09)"},
        {"0A", "伊塔普阿省 | Itapúa (0A)"},
        {"0B", "米西奥内斯省 | Misiones (0B)"},
        {"0C", "涅恩布库省 | Ñeembucú (0C)"},
        {"0D", "巴拉瓜里省 | Paraguarí (0D)"},
        {"0E", "总统 Hayes省 | Presidente Hayes (0E)"},
        {"0F", "圣佩德罗省 | San Pedro (0F)"},
        {"10", "卡宁德尤省 | Canindeyú (10)"},
        {"11", "亚松森 | Asunción (11)"},
        {"12", "上巴拉圭省 | Alto Paraguay (12)"},
        {"13", "博克龙省 | Boquerón (13)"}
};

// 秘鲁地区
State pe_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "利马省 | Lima (02)"},
        {"03", "亚马孙省 | Amazonas (03)"},
        {"04", "安卡什省 | Ancash (04)"},
        {"05", "阿普里马克省 | Apurímac (05)"},
        {"06", "阿雷基帕省 | Arequipa (06)"},
        {"07", "阿亚库乔省 | Ayacucho (07)"},
        {"08", "卡哈马卡省 | Cajamarca (08)"},
        {"09", "卡亚俄省 | Callao (09)"},
        {"0A", "库斯科省 | Cuzco (0A)"},
        {"0B", "万卡韦利卡省 | Huancavelica (0B)"},
        {"0C", "瓦努科省 | Huánuco (0C)"},
        {"0D", "伊卡省 | Ica (0D)"},
        {"0E", "胡宁省 | Junín (0E)"},
        {"0F", "拉利伯塔德省 | La Libertad (0F)"},
        {"10", "兰巴耶克省 | Lambayeque (10)"},
        {"11", "洛雷托省 | Loreto (11)"},
        {"12", "马德雷德迪奥斯省 | Madre de Dios (12)"},
        {"13", "莫克瓜省 | Moquegua (13)"},
        {"14", "帕斯科省 | Pasco (14)"},
        {"15", "皮乌拉省 | Piura (15)"},
        {"16", "普诺省 | Puno (16)"},
        {"17", "圣马丁省 | San Martín (17)"},
        {"18", "塔克纳省 | Tacna (18)"},
        {"19", "通贝斯省 | Tumbes (19)"},
        {"1A", "乌卡亚利省 | Ucayali (1A)"}
};

// 圣基茨和尼维斯地区
State kn_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "圣乔治巴塞特雷 | Saint George Basseterre (02)"},
        {"03", "基督教堂尼古拉镇 | Christ Church Nichola Town (03)"},
        {"04", "圣安妮桑迪角 | Saint Anne Sandy Point (04)"},
        {"05", "圣乔治金吉兰 | Saint George Gingerland (05)"},
        {"06", "圣詹姆斯温沃德 | Saint James Windward (06)"},
        {"07", "圣约翰卡佩斯泰尔 | Saint John Capesterre (07)"},
        {"08", "圣约翰菲格特里 | Saint John Figtree (08)"},
        {"09", "圣玛丽卡永 | Saint Mary Cayon (09)"},
        {"0A", "圣保罗卡佩斯泰尔 | Saint Paul Capesterre (0A)"},
        {"0B", "圣保罗查尔斯敦 | Saint Paul Charlestown (0B)"},
        {"0C", "圣彼得巴塞特雷 | Saint Peter Basseterre (0C)"},
        {"0D", "圣托马斯洛兰 | Saint Thomas Lowland (0D)"},
        {"0E", "圣托马斯中岛 | Saint Thomas Middle Island (0E)"},
        {"0F", "三一帕尔梅托角 | Trinity Palmetto Point (0F)"}
};

// 圣卢西亚地区
State lc_states[] = {
        {"01", "圣卢西亚 | St. Lucia (01)"}
};

// 圣文森特和格林纳丁斯地区
State vc_states[] = {
        {"01", "圣文森特和格林纳丁斯 | St. Vincent and the Grenadines (01)"}
};

// 苏里南地区
State sr_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "帕拉马里博区 | Paramaribo (02)"},
        {"03", "布罗科蓬多区 | Brokopondo (03)"},
        {"04", "科默韦讷区 | Commewijne (04)"},
        {"05", "科罗尼区 | Coronie (05)"},
        {"06", "马罗韦讷区 | Marowijne (06)"},
        {"07", "尼克里区 | Nickerie (07)"},
        {"08", "帕拉区 | Para (08)"},
        {"09", "萨拉马卡区 | Saramacca (09)"},
        {"0A", "锡帕利维尼区 | Sipaliwini (0A)"},
        {"0B", "瓦尼卡区 | Wanica (0B)"}
};

// 特立尼达和多巴哥地区
State tt_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "西班牙港 | Port-of-Spain (02)"},
        {"03", "阿里马 | Arima (03)"},
        {"04", "卡罗尼 | Caroni (04)"},
        {"05", "马亚罗 | Mayaro (05)"},
        {"06", "纳里瓦 | Nariva (06)"},
        {"07", "圣安德鲁 | Saint Andrew (07)"},
        {"08", "圣戴维 | Saint David (08)"},
        {"09", "圣乔治 | Saint George (09)"},
        {"0A", "圣帕特里克 | Saint Patrick (0A)"},
        {"0B", "圣费尔南多 | San Fernando (0B)"},
        {"0C", "多巴哥 | Tobago (0C)"},
        {"0D", "维多利亚 | Victoria (0D)"},
        {"0E", "福廷角 | Point Fortin (0E)"}
};

// 特克斯和凯科斯群岛地区
State tc_states[] = {
        {"01", "特克斯和凯科斯群岛 | Turks and Caicos Islands (01)"}
};

// 美国地区
State us_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "哥伦比亚特区 | District of Columbia (02)"},
        {"03", "阿拉斯加州 | Alaska (03)"},
        {"04", "亚拉巴马州 | Alabama (04)"},
        {"05", "阿肯色州 | Arkansas (05)"},
        {"06", "亚利桑那州 | Arizona (06)"},
        {"07", "加利福尼亚州 | California (07)"},
        {"08", "科罗拉多州 | Colorado (08)"},
        {"09", "康涅狄格州 | Connecticut (09)"},
        {"0A", "特拉华州 | Delaware (0A)"},
        {"0B", "佛罗里达州 | Florida (0B)"},
        {"0C", "佐治亚州 | Georgia (0C)"},
        {"0D", "夏威夷州 | Hawaii (0D)"},
        {"0E", "爱荷华州 | Iowa (0E)"},
        {"0F", "爱达荷州 | Idaho (0F)"},
        {"10", "伊利诺伊州 | Illinois (10)"},
        {"11", "印第安纳州 | Indiana (11)"},
        {"12", "堪萨斯州 | Kansas (12)"},
        {"13", "肯塔基州 | Kentucky (13)"},
        {"14", "路易斯安那州 | Louisiana (14)"},
        {"15", "马萨诸塞州 | Massachusetts (15)"},
        {"16", "马里兰州 | Maryland (16)"},
        {"17", "缅因州 | Maine (17)"},
        {"18", "密歇根州 | Michigan (18)"},
        {"19", "明尼苏达州 | Minnesota (19)"},
        {"1A", "密苏里州 | Missouri (1A)"},
        {"1B", "密西西比州 | Mississippi (1B)"},
        {"1C", "蒙大拿州 | Montana (1C)"},
        {"1D", "北卡罗来纳州 | North Carolina (1D)"},
        {"1E", "北达科他州 | North Dakota (1E)"},
        {"1F", "内布拉斯加州 | Nebraska (1F)"},
        {"20", "新罕布什尔州 | New Hampshire (20)"},
        {"21", "新泽西州 | New Jersey (21)"},
        {"22", "新墨西哥州 | New Mexico (22)"},
        {"23", "内华达州 | Nevada (23)"},
        {"24", "纽约州 | New York (24)"},
        {"25", "俄亥俄州 | Ohio (25)"},
        {"26", "俄克拉荷马州 | Oklahoma (26)"},
        {"27", "俄勒冈州 | Oregon (27)"},
        {"28", "宾夕法尼亚州 | Pennsylvania (28)"},
        {"29", "罗得岛州 | Rhode Island (29)"},
        {"2A", "南卡罗来纳州 | South Carolina (2A)"},
        {"2B", "南达科他州 | South Dakota (2B)"},
        {"2C", "田纳西州 | Tennessee (2C)"},
        {"2D", "得克萨斯州 | Texas (2D)"},
        {"2E", "犹他州 | Utah (2E)"},
        {"2F", "弗吉尼亚州 | Virginia (2F)"},
        {"30", "佛蒙特州 | Vermont (30)"},
        {"31", "华盛顿州 | Washington (31)"},
        {"32", "威斯康星州 | Wisconsin (32)"},
        {"33", "西弗吉尼亚州 | West Virginia (33)"},
        {"34", "怀俄明州 | Wyoming (34)"},
        {"35", "波多黎各 | Puerto Rico (35)"}
};

// 乌拉圭地区
State uy_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "蒙得维的亚 | Montevideo (02)"},
        {"03", "阿蒂加斯省 | Artigas (03)"},
        {"04", "卡内洛内斯省 | Canelones (04)"},
        {"05", "塞罗拉尔戈省 | Cerro Largo (05)"},
        {"06", "科洛尼亚省 | Colonia (06)"},
        {"07", "杜拉斯诺省 | Durazno (07)"},
        {"08", "弗洛雷斯省 | Flores (08)"},
        {"09", "佛罗里达省 | Florida (09)"},
        {"0A", "拉瓦列哈省 | Lavalleja (0A)"},
        {"0B", "马尔多纳多省 | Maldonado (0B)"},
        {"0C", "派桑杜省 | Paysandú (0C)"},
        {"0D", "里奥内格罗省 | Río Negro (0D)"},
        {"0E", "里韦拉省 | Rivera (0E)"},
        {"0F", "罗恰省 | Rocha (0F)"},
        {"10", "萨尔托省 | Salto (10)"},
        {"11", "圣何塞省 | San José (11)"},
        {"12", "索里亚诺省 | Soriano (12)"},
        {"13", "塔夸伦博省 | Tacuarembó (13)"},
        {"14", "三十三人省 | Treinta y Tres (14)"}
};

// 美属维尔京群岛地区
State vi_states[] = {
        {"01", "美属维尔京群岛 | US Virgin Islands (01)"}
};

// 委内瑞拉地区
State ve_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "联邦区 | Distrito Federal (02)"},
        {"03", "亚马孙州 | Amazonas (03)"},
        {"04", "安索阿特吉州 | Anzoátegui (04)"},
        {"05", "阿普雷州 | Apure (05)"},
        {"06", "阿拉瓜州 | Aragua (06)"},
        {"07", "巴里纳斯州 | Barinas (07)"},
        {"08", "玻利瓦尔州 | Bolívar (08)"},
        {"09", "卡拉沃沃州 | Carabobo (09)"},
        {"0A", "科赫德斯州 | Cojedes (0A)"},
        {"0B", "阿马库罗三角洲州 | Delta Amacuro (0B)"},
        {"0C", "法尔孔州 | Falcón (0C)"},
        {"0D", "瓜里科州 | Guárico (0D)"},
        {"0E", "拉腊州 | Lara (0E)"},
        {"0F", "梅里达州 | Mérida (0F)"},
        {"10", "米兰达州 | Miranda (10)"},
        {"11", "莫纳加斯州 | Monagas (11)"},
        {"12", "新埃斯帕塔州 | Nueva Esparta (12)"},
        {"13", "葡萄牙萨州 | Portuguesa (13)"},
        {"14", "苏克雷州 | Sucre (14)"},
        {"15", "塔奇拉州 | Táchira (15)"},
        {"16", "特鲁希略州 | Trujillo (16)"},
        {"17", "亚拉奎州 | Yaracuy (17)"},
        {"18", "苏利亚州 | Zulia (18)"},
        {"19", "联邦属地 | Dependencias Federales (19)"},
        {"1A", "巴尔加斯州 | Vargas (1A)"}
};

// 阿尔巴尼亚地区
State al_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "地拉那 | Tirana (02)"},
        {"03", "培拉特 | Berat (03)"},
        {"04", "迪勃拉 | Dibër (04)"},
        {"05", "都拉斯 | Durrës (05)"},
        {"06", "爱尔巴桑 | Elbasan (06)"},
        {"07", "费里 | Fier (07)"},
        {"08", "吉诺卡斯特 | Gjirokastër (08)"},
        {"09", "科尔察 | Korçë (09)"},
        {"0A", "库克斯 | Kukës (0A)"},
        {"0B", "莱什 | Lezhë (0B)"},
        {"0C", "斯库台 | Shkodër (0C)"},
        {"0D", "发罗拉 | Vlorë (0D)"}
};

// 澳大利亚地区
State au_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "澳大利亚首都领地 | Australian Capital Territory (02)"},
        {"03", "新南威尔士州 | New South Wales (03)"},
        {"04", "北领地 | Northern Territory (04)"},
        {"05", "昆士兰州 | Queensland (05)"},
        {"06", "南澳大利亚州 | South Australia (06)"},
        {"07", "塔斯马尼亚州 | Tasmania (07)"},
        {"08", "维多利亚州 | Victoria (08)"},
        {"09", "西澳大利亚州 | Western Australia (09)"}
};

// 奥地利地区
State at_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "维也纳 | Vienna (02)"},
        {"03", "布尔根兰州 | Burgenland (03)"},
        {"04", "克恩滕州 | Carinthia (04)"},
        {"05", "下奥地利州 | Lower Austria (05)"},
        {"06", "上奥地利州 | Upper Austria (06)"},
        {"07", "萨尔茨堡州 | Salzburg (07)"},
        {"08", "施蒂利亚州 | Styria (08)"},
        {"09", "蒂罗尔州 | Tyrol (09)"},
        {"0A", "福拉尔贝格州 | Vorarlberg (0A)"}
};

// 比利时地区
State be_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "布鲁塞尔大区 | Brussels Region (02)"},
        {"03", "弗拉芒大区 | Flanders (03)"},
        {"04", "瓦隆大区 | Wallonia (04)"}
};

// 波斯尼亚和黑塞哥维那地区
State ba_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "波斯尼亚和黑塞哥维那联邦 | Federation of Bosnia and Herzegovina (02)"},
        {"03", "塞族共和国 | Republika Srpska (03)"},
        {"04", "布尔奇科特区 | Brčko District (04)"}
};

// 博茨瓦纳地区
State bw_states[] = {
        {"01", "博茨瓦纳 | Botswana (01)"}
};

// 保加利亚地区
State bg_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "索非亚市 | Sofia City (02)"},
        {"03", "索非亚州 | Sofia Province (03)"},
        {"04", "布拉戈耶夫格勒州 | Blagoevgrad (04)"},
        {"05", "普列文州 | Pleven (05)"},
        {"06", "维丁州 | Vidin (06)"},
        {"07", "瓦尔纳州 | Varna (07)"},
        {"08", "布尔加斯州 | Burgas (08)"},
        {"09", "多布里奇州 | Dobrich (09)"},
        {"0A", "加布罗沃州 | Gabrovo (0A)"},
        {"0B", "哈斯科沃州 | Haskovo (0B)"},
        {"0C", "扬博尔州 | Yambol (0C)"},
        {"0D", "克尔贾利州 | Kardzhali (0D)"},
        {"0E", "丘斯滕迪尔州 | Kyustendil (0E)"},
        {"0F", "洛维奇州 | Lovech (0F)"},
        {"10", "蒙塔纳州 | Montana (10)"},
        {"11", "帕扎尔吉克州 | Pazardzhik (11)"},
        {"12", "佩尔尼克州 | Pernik (12)"},
        {"13", "普罗夫迪夫州 | Plovdiv (13)"},
        {"14", "拉兹格勒州 | Razgrad (14)"},
        {"15", "鲁塞州 | Ruse (15)"},
        {"16", "锡利斯特拉州 | Silistra (16)"},
        {"17", "斯利文州 | Sliven (17)"},
        {"18", "斯莫梁州 | Smolyan (18)"},
        {"19", "旧扎戈拉州 | Stara Zagora (19)"},
        {"1A", "舒门州 | Shumen (1A)"},
        {"1B", "特尔戈维什特州 | Targovishte (1B)"},
        {"1C", "大特尔诺沃州 | Veliko Tarnovo (1C)"},
        {"1D", "弗拉察州 | Vratsa (1D)"}
};

// 克罗地亚地区
State hr_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"06", "萨格勒布 | Zagreb (06)"},
        {"07", "别洛瓦尔-比洛戈拉县 | Bjelovar-Bilogora County (07)"},
        {"08", "布罗德-波萨维纳县 | Brod-Posavina County (08)"},
        {"09", "杜布罗夫尼克-内雷特瓦县 | Dubrovnik-Neretva County (09)"},
        {"0A", "伊斯特拉县 | Istria County (0A)"},
        {"0B", "卡尔洛瓦茨县 | Karlovac County (0B)"},
        {"0C", "科普里夫尼察-克里热夫齐县 | Koprivnica-Križevci County (0C)"},
        {"0D", "克拉皮纳-扎戈列县 | Krapina-Zagorje County (0D)"},
        {"0E", "利卡-塞尼县 | Lika-Senj County (0E)"},
        {"0F", "梅吉穆列县 | Međimurje County (0F)"},
        {"10", "奥西耶克-巴拉尼亚县 | Osijek-Baranja County (10)"},
        {"11", "波热加-斯拉沃尼亚县 | Požega-Slavonia County (11)"},
        {"12", "滨海和戈尔斯基科塔尔县 | Primorje-Gorski Kotar County (12)"},
        {"13", "锡萨克-莫斯拉维纳县 | Sisak-Moslavina County (13)"},
        {"14", "斯普利特-达尔马提亚县 | Split-Dalmatia County (14)"},
        {"15", "希贝尼克-克宁县 | Šibenik-Knin County (15)"},
        {"16", "瓦拉日丁县 | Varaždin County (16)"},
        {"17", "维罗维蒂察-波德拉维纳县 | Virovitica-Podravina County (17)"},
        {"18", "武科瓦尔-斯里耶姆县 | Vukovar-Syrmia County (18)"},
        {"19", "扎达尔县 | Zadar County (19)"},
        {"1A", "萨格勒布县 | Zagreb County (1A)"}
};

// 塞浦路斯地区
State cy_states[] = {
        {"01", "塞浦路斯 | Cyprus (01)"}
};

// 捷克共和国地区
State cz_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "布拉格 | Prague (02)"},
        {"03", "中波希米亚州 | Central Bohemian Region (03)"},
        {"04", "南波希米亚州 | South Bohemian Region (04)"},
        {"05", "比尔森州 | Plzeň Region (05)"},
        {"06", "卡罗维发利州 | Karlovy Vary Region (06)"},
        {"07", "乌斯季州 | Ústí nad Labem Region (07)"},
        {"08", "利贝雷茨州 | Liberec Region (08)"},
        {"09", "赫拉德茨-克拉洛韦州 | Hradec Králové Region (09)"},
        {"0A", "帕尔杜比采州 | Pardubice Region (0A)"},
        {"0B", "奥洛穆茨州 | Olomouc Region (0B)"},
        {"0C", "摩拉维亚-西里西亚州 | Moravian-Silesian Region (0C)"},
        {"0D", "南摩拉维亚州 | South Moravian Region (0D)"},
        {"0E", "兹林州 | Zlín Region (0E)"},
        {"0F", "维索基纳州 | Vysočina Region (0F)"}
};

// 丹麦地区
State dk_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"12", "格陵兰 | Greenland (12)"},
        {"13", "丹麦首都大区 | Capital Region of Denmark (13)"},
        {"14", "丹麦中央大区 | Central Denmark Region (14)"},
        {"15", "北丹麦大区 | North Denmark Region (15)"},
        {"16", "西兰大区 | Region Zealand (16)"},
        {"17", "南丹麦大区 | Region of Southern Denmark (17)"},
        {"18", "法罗群岛 | Faroe Islands (18)"}
};

// 爱沙尼亚地区
State ee_states[] = {
        {"01", "爱沙尼亚 | Estonia (01)"}
};

// 芬兰地区
State fi_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"08", "新地区 | Uusimaa / Nyland (08)"},
        {"09", "拉普兰省 | Lappi / Lapland (09)"},
        {"0A", "北博滕区 | Pohjois-Pohjanmaa / Norra Österbotten (0A)"},
        {"0B", "凯努区 | Kainuu / Kajanaland (0B)"},
        {"0C", "北卡累利阿区 | Pohjois-Karjala / Norra Karelen (0C)"},
        {"0D", "北萨沃区 | Pohjois-Savo / Norra Savolax (0D)"},
        {"0E", "南萨沃区 | Etelä-Savo / Södra Savolax (0E)"},
        {"0F", "南博滕区 | Etelä-Pohjanmaa / Södra Österbotten (0F)"},
        {"10", "博滕区 | Pohjanmaa / Österbotten (10)"},
        {"11", "皮尔卡区 | Pirkanmaa / Birkaland (11)"},
        {"12", "萨塔昆塔区 | Satakunta / Satakunda (12)"},
        {"13", "中博滕区 | Keski-Pohjanmaa / Mellersta Österbotten (13)"},
        {"14", "中芬兰区 | Keski-Suomi / Mellersta Finland (14)"},
        {"15", "西南芬兰区 | Varsinais-Suomi / Egentliga Finland (15)"},
        {"16", "南卡累利阿区 | Etelä-Karjala / Södra Karelen (16)"},
        {"17", "派亚特-海梅区 | Päijät-Häme / Päijänne Tavastland (17)"},
        {"18", "坎塔-海梅区 | Kanta-Häme / Egentliga Tavastland (18)"},
        {"19", "东新地区 | Itä-Uusimaa / Östra Nyland (19)"},
        {"1A", "屈米河谷区 | Kymenlaakso / Kymmenedalen (1A)"},
        {"1B", "奥兰群岛 | Ahvenanmaa / Åland (1B)"}
};

// 法国地区
State fr_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "法兰西岛大区 | Île-de-France (02)"},
        {"03", "阿尔萨斯大区 | Alsace (03)"},
        {"04", "阿基坦大区 | Aquitaine (04)"},
        {"05", "奥弗涅大区 | Auvergne (05)"},
        {"06", "下诺曼底大区 | Lower Normandy (06)"},
        {"07", "勃艮第大区 | Burgundy (07)"},
        {"08", "布列塔尼大区 | Brittany (08)"},
        {"09", "中央大区 | Centre (09)"},
        {"0A", "香槟-阿登大区 | Champagne-Ardenne (0A)"},
        {"0B", "科西嘉大区 | Corsica (0B)"},
        {"0C", "弗朗什-孔泰大区 | Franche-Comté (0C)"},
        {"0D", "上诺曼底大区 | Upper Normandy (0D)"},
        {"0E", "朗格多克-鲁西永大区 | Languedoc-Roussillon (0E)"},
        {"0F", "利穆赞大区 | Limousin (0F)"},
        {"10", "洛林大区 | Lorraine (10)"},
        {"11", "南比利牛斯大区 | Midi-Pyrénées (11)"},
        {"12", "北部-加来海峡大区 | Nord-Pas-de-Calais (12)"},
        {"13", "卢瓦尔河地区大区 | Pays de la Loire (13)"},
        {"14", "皮卡第大区 | Picardy (14)"},
        {"15", "普瓦图-夏朗德大区 | Poitou-Charentes (15)"},
        {"16", "普罗旺斯-阿尔卑斯-蓝色海岸大区 | Provence-Alpes-Côte d'Azur (16)"},
        {"17", "罗讷-阿尔卑斯大区 | Rhône-Alpes (17)"},
        {"18", "瓜德罗普 | Guadeloupe (18)"},
        {"19", "马提尼克 | Martinique (19)"},
        {"1A", "法属圭亚那 | French Guiana (1A)"},
        {"1B", "留尼汪 | Réunion (1B)"}
};

// 德国地区
State de_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "柏林 | Berlin (02)"},
        {"03", "黑森州 | Hesse (03)"},
        {"04", "巴登-符腾堡州 | Baden-Württemberg (04)"},
        {"05", "巴伐利亚州 | Bavaria (05)"},
        {"06", "勃兰登堡州 | Brandenburg (06)"},
        {"07", "不来梅州 | Bremen (07)"},
        {"08", "汉堡州 | Hamburg (08)"},
        {"09", "梅克伦堡-前波莫瑞州 | Mecklenburg-Vorpommern (09)"},
        {"0A", "下萨克森州 | Lower Saxony (0A)"},
        {"0B", "北莱茵-威斯特法伦州 | North Rhine-Westphalia (0B)"},
        {"0C", "莱茵兰-普法尔茨州 | Rhineland-Palatinate (0C)"},
        {"0D", "萨尔兰州 | Saarland (0D)"},
        {"0E", "萨克森州 | Saxony (0E)"},
        {"0F", "萨克森-安哈尔特州 | Saxony-Anhalt (0F)"},
        {"10", "石勒苏益格-荷尔斯泰因州 | Schleswig-Holstein (10)"},
        {"11", "图林根州 | Thuringia (11)"}
};

// 希腊地区
State gr_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "阿提卡大区 | Attica (02)"},
        {"03", "中希腊大区 | Central Greece (03)"},
        {"04", "中马其顿大区 | Central Macedonia (04)"},
        {"05", "克里特大区 | Crete (05)"},
        {"06", "东马其顿和色雷斯大区 | East Macedonia and Thrace (06)"},
        {"07", "伊庇鲁斯大区 | Epirus (07)"},
        {"08", "爱奥尼亚群岛大区 | Ionian Islands (08)"},
        {"09", "北爱琴大区 | North Aegean (09)"},
        {"0A", "伯罗奔尼撒大区 | Peloponnese (0A)"},
        {"0B", "南爱琴大区 | South Aegean (0B)"},
        {"0C", "塞萨利大区 | Thessaly (0C)"},
        {"0D", "西希腊大区 | West Greece (0D)"},
        {"0E", "西马其顿大区 | West Macedonia (0E)"}
};

// 匈牙利地区
State hu_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "布达佩斯 | Budapest (02)"},
        {"03", "巴奇-基什孔州 | Bács-Kiskun County (03)"},
        {"04", "巴拉尼亚州 | Baranya County (04)"},
        {"05", "贝凯什州 | Békés County (05)"},
        {"06", "包尔绍德-奥包乌伊-曾普伦州 | Borsod-Abaúj-Zemplén County (06)"},
        {"07", "琼格拉德州 | Csongrád County (07)"},
        {"08", "费耶尔州 | Fejér County (08)"},
        {"09", "杰尔-莫松-肖普朗州 | Győr-Moson-Sopron County (09)"},
        {"0A", "豪伊杜-比豪尔州 | Hajdú-Bihar County (0A)"},
        {"0B", "赫维什州 | Heves County (0B)"},
        {"0C", "亚斯-瑙吉孔-索尔诺克州 | Jász-Nagykun-Szolnok County (0C)"},
        {"0D", "科马罗姆-埃斯泰尔戈姆州 | Komárom-Esztergom County (0D)"},
        {"0E", "诺格拉德州 | Nógrád County (0E)"},
        {"0F", "佩斯州 | Pest County (0F)"},
        {"10", "绍莫吉州 | Somogy County (10)"},
        {"11", "绍博尔奇-索特马尔-贝拉格州 | Szabolcs-Szatmár-Bereg County (11)"},
        {"12", "托尔瑙州 | Tolna County (12)"},
        {"13", "沃什州 | Vas County (13)"},
        {"14", "维斯普雷姆州 | Veszprém County (14)"},
        {"15", "佐洛州 | Zala County (15)"}
};

// 冰岛地区
State is_states[] = {
        {"01", "冰岛 | Iceland (01)"}
};

// 爱尔兰地区
State ie_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "都柏林 | Dublin (02)"},
        {"0A", "卡洛郡 | County Carlow (0A)"},
        {"0B", "卡文郡 | County Cavan (0B)"},
        {"0C", "克莱尔郡 | County Clare (0C)"},
        {"0D", "科克郡 | County Cork (0D)"},
        {"0E", "多尼戈尔郡 | County Donegal (0E)"},
        {"0F", "戈尔韦郡 | County Galway (0F)"},
        {"10", "凯里郡 | County Kerry (10)"},
        {"11", "基尔代尔郡 | County Kildare (11)"},
        {"12", "基尔肯尼郡 | County Kilkenny (12)"},
        {"13", "莱伊什郡 | County Laois (13)"},
        {"14", "利特里姆郡 | County Leitrim (14)"},
        {"15", "利默里克郡 | County Limerick (15)"},
        {"16", "朗福德郡 | County Longford (16)"},
        {"17", "劳斯郡 | County Louth (17)"},
        {"18", "梅奥郡 | County Mayo (18)"},
        {"19", "米斯郡 | County Meath (19)"},
        {"1A", "莫纳亨郡 | County Monaghan (1A)"},
        {"1B", "奥法利郡 | County Offaly (1B)"},
        {"1C", "罗斯康芒郡 | County Roscommon (1C)"},
        {"1D", "斯莱戈郡 | County Sligo (1D)"},
        {"1E", "蒂珀雷里郡 | County Tipperary (1E)"},
        {"1F", "沃特福德郡 | County Waterford (1F)"},
        {"20", "韦斯特米斯郡 | County Westmeath (20)"},
        {"21", "韦克斯福德郡 | County Wexford (21)"},
        {"22", "威克洛郡 | County Wicklow (22)"}
};

// 意大利地区
State it_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "拉齐奥大区 | Lazio (02)"},
        {"03", "瓦莱达奥斯塔大区 | Aosta Valley (03)"},
        {"04", "皮埃蒙特大区 | Piedmont (04)"},
        {"05", "利古里亚大区 | Liguria (05)"},
        {"06", "伦巴第大区 | Lombardy (06)"},
        {"07", "特伦蒂诺-上阿迪杰大区 | Trentino-Alto Adige (07)"},
        {"08", "威尼托大区 | Veneto (08)"},
        {"09", "弗留利-威尼斯朱利亚大区 | Friuli Venezia Giulia (09)"},
        {"0A", "艾米利亚-罗马涅大区 | Emilia-Romagna (0A)"},
        {"0B", "托斯卡纳大区 | Tuscany (0B)"},
        {"0C", "翁布里亚大区 | Umbria (0C)"},
        {"0D", "马尔凯大区 | Marche (0D)"},
        {"0E", "阿布鲁佐大区 | Abruzzo (0E)"},
        {"0F", "莫利塞大区 | Molise (0F)"},
        {"10", "坎帕尼亚大区 | Campania (10)"},
        {"11", "普利亚大区 | Apulia (11)"},
        {"12", "巴西利卡塔大区 | Basilicata (12)"},
        {"13", "卡拉布里亚大区 | Calabria (13)"},
        {"14", "西西里大区 | Sicily (14)"},
        {"15", "撒丁大区 | Sardinia (15)"}
};

// 拉脱维亚地区
State lv_states[] = {
        {"01", "拉脱维亚 | Latvia (01)"}
};

// 莱索托地区
State ls_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "马塞卢区 | Maseru (02)"},
        {"03", "伯里亚区 | Berea (03)"},
        {"04", "布塔-布泰区 | Butha-Buthe (04)"},
        {"05", "莱里贝区 | Leribe (05)"},
        {"06", "马费滕区 | Mafeteng (06)"},
        {"07", "莫哈莱斯胡克区 | Mohale's Hoek (07)"},
        {"08", "莫霍特隆区 | Mokhotlong (08)"},
        {"09", "卡察内克区 | Qacha's Nek (09)"},
        {"0A", "奎托区 | Quthing (0A)"},
        {"0B", "塔巴-采卡区 | Thaba-Tseka (0B)"}
};

// 列支敦士登地区
State li_states[] = {
        {"01", "列支敦士登 | Liechtenstein (01)"}
};

// 立陶宛地区
State lt_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "维尔纽斯县 | Vilnius (02)"},
        {"03", "阿利图斯县 | Alytus (03)"},
        {"04", "考纳斯县 | Kaunas (04)"},
        {"05", "克莱佩达县 | Klaipėda (05)"},
        {"06", "马里扬泊列县 | Marijampolė (06)"},
        {"07", "帕涅韦日斯县 | Panevėžys (07)"},
        {"08", "希奥利艾县 | Šiauliai (08)"},
        {"09", "陶拉盖县 | Taurage (09)"},
        {"0A", "特尔希艾县 | Telšiai (0A)"},
        {"0B", "乌田纳县 | Utena (0B)"}
};

// 卢森堡地区
State lu_states[] = {
        {"01", "卢森堡 | Luxembourg (01)"}
};

// 马其顿地区
State mk_states[] = {
        {"01", "马其顿共和国 | Macedonia (Republic of) (01)"}
};

// 马耳他地区
State mt_states[] = {
        {"01", "马耳他 | Malta (01)"}
};

// 黑山地区
State me_states[] = {
        {"01", "黑山 | Montenegro (01)"}
};

// 莫桑比克地区
State mz_states[] = {
        {"01", "莫桑比克 | Mozambique (01)"}
};

// 纳米比亚地区
State na_states[] = {
        {"01", "纳米比亚 | Namibia (01)"}
};

// 荷兰地区
State nl_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "北荷兰省 | North Holland (02)"},
        {"03", "德伦特省 | Drenthe (03)"},
        {"04", "弗莱福兰省 | Flevoland (04)"},
        {"05", "弗里斯兰省 | Friesland (05)"},
        {"06", "海尔德兰省 | Gelderland (06)"},
        {"07", "格罗宁根省 | Groningen (07)"},
        {"08", "林堡省 | Limburg (08)"},
        {"09", "北布拉班特省 | North Brabant (09)"},
        {"0A", "上艾瑟尔省 | Overijssel (0A)"},
        {"0B", "南荷兰省 | South Holland (0B)"},
        {"0C", "乌得勒支省 | Utrecht (0C)"},
        {"0D", "泽兰省 | Zeeland (0D)"}
};

// 新西兰地区
State nz_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "惠灵顿大区 | Wellington (02)"},
        {"03", "奥克兰大区 | Auckland (03)"},
        {"04", "丰盛湾大区 | Bay of Plenty (04)"},
        {"05", "坎特伯雷大区 | Canterbury (05)"},
        {"06", "奥塔哥大区 | Otago (06)"},
        {"07", "霍克斯湾大区 | Hawke's Bay (07)"},
        {"08", "马纳瓦图-旺加努伊大区 | Manawatu-Wanganui (08)"},
        {"09", "尼尔森大区 | Nelson (09)"},
        {"0A", "北地大区 | Northland (0A)"},
        {"0C", "南地大区 | Southland (0C)"},
        {"0D", "塔拉纳基大区 | Taranaki (0D)"},
        {"0E", "怀卡托大区 | Waikato (0E)"},
        {"0F", "吉斯伯恩大区 | Gisborne (0F)"},
        {"10", "西海岸大区 | West Coast (10)"},
        {"11", "马尔堡大区 | Marlborough (11)"},
        {"12", "塔斯曼大区 | Tasman (12)"}
};

// 挪威地区
State no_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"07", "奥斯陆 | Oslo (07)"},
        {"08", "阿克什胡斯郡 | Akershus (08)"},
        {"09", "东阿格德尔郡 | Aust-Agder (09)"},
        {"0A", "布斯克吕郡 | Buskerud (0A)"},
        {"0B", "芬马克郡 | Finnmark (0B)"},
        {"0C", "海德马克郡 | Hedmark (0C)"},
        {"0D", "霍达兰郡 | Hordaland (0D)"},
        {"0E", "默勒-鲁姆斯达尔郡 | Møre og Romsdal (0E)"},
        {"0F", "诺尔兰郡 | Nordland (0F)"},
        {"10", "北特伦德拉格郡 | Nord-Trøndelag (10)"},
        {"11", "奥普兰郡 | Oppland (11)"},
        {"12", "罗加兰郡 | Rogaland (12)"},
        {"13", "松恩-菲尤拉讷郡 | Sogn og Fjordane (13)"},
        {"14", "南特伦德拉格郡 | Sør-Trøndelag (14)"},
        {"15", "泰勒马克郡 | Telemark (15)"},
        {"16", "特罗姆斯郡 | Troms (16)"},
        {"17", "西阿格德尔郡 | Vest-Agder (17)"},
        {"18", "西福尔郡 | Vestfold (18)"},
        {"19", "东福尔郡 | Østfold (19)"},
        {"1A", "斯瓦尔巴群岛 | Svalbard (1A)"}
};

// 波兰地区
State pl_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "马佐夫舍省 | Masovia (02)"},
        {"03", "下西里西亚省 | Lower Silesia (03)"},
        {"04", "库亚维-滨海省 | Kuyavian-Pomeranian Voivodeship (04)"},
        {"05", "罗兹省 | Lodz (05)"},
        {"06", "卢布林省 | Lublin (06)"},
        {"07", "卢布斯卡省 | Lubusz (07)"},
        {"08", "小波兰省 | Lesser Poland (08)"},
        {"09", "奥波莱省 | Opole (09)"},
        {"0A", "喀尔巴阡山省 | Subcarpathia (0A)"},
        {"0B", "波德拉谢省 | Podlachia (0B)"},
        {"0C", "滨海省 | Pomerania (0C)"},
        {"0D", "西里西亚省 | Silesia (0D)"},
        {"0E", "圣十字省 | Świętokrzyskie (0E)"},
        {"0F", "瓦尔米亚-马祖里省 | Warmian-Masurian Voivodeship (0F)"},
        {"10", "大波兰省 | Greater Poland (10)"},
        {"11", "西滨海省 | Western Pomerania (11)"}
};

// 葡萄牙地区
State pt_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "里斯本 | Lisbon (02)"},
        {"07", "马德拉自治区 | Madeira (07)"},
        {"08", "亚速尔自治区 | Azores (08)"},
        {"09", "阿威罗区 | Aveiro (09)"},
        {"0A", "贝雅区 | Beja (0A)"},
        {"0B", "布拉加区 | Braga (0B)"},
        {"0C", "布拉干萨区 | Bragança (0C)"},
        {"0D", "卡斯特罗布兰科区 | Castelo Branco (0D)"},
        {"0E", "科英布拉区 | Coimbra (0E)"},
        {"0F", "埃武拉区 | Évora (0F)"},
        {"10", "法鲁区 | Faro (10)"},
        {"11", "瓜达区 | Guarda (11)"},
        {"12", "莱里亚区 | Leiria (12)"},
        {"13", "波塔莱格雷区 | Portalegre (13)"},
        {"14", "波尔图区 | Porto (14)"},
        {"15", "圣塔伦区 | Santarém (15)"},
        {"16", "塞图巴尔区 | Setúbal (16)"},
        {"17", "维亚纳堡区 | Viana do Castelo (17)"},
        {"18", "雷阿尔城区 | Vila Real (18)"},
        {"19", "维塞乌区 | Viseu (19)"}
};

// 罗马尼亚地区
State ro_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "布加勒斯特 | Bucharest (02)"},
        {"03", "阿尔巴县 | Alba (03)"},
        {"04", "阿拉德县 | Arad (04)"},
        {"05", "阿尔杰什县 | Arges (05)"},
        {"06", "巴克乌县 | Bacau (06)"},
        {"07", "比霍尔县 | Bihor (07)"},
        {"08", "比斯特里察-讷瑟乌德县 | Bistrita-Nasaud (08)"},
        {"09", "博托沙尼县 | Botosani (09)"},
        {"0A", "布勒伊拉县 | Braila (0A)"},
        {"0B", "布拉索夫县 | Brasov (0B)"},
        {"0C", "布泽乌县 | Buzau (0C)"},
        {"0D", "克勒拉希县 | Calarasi (0D)"},
        {"0E", "卡拉什-塞维林县 | Caras-Severin (0E)"},
        {"0F", "克卢日县 | Cluj (0F)"},
        {"10", "康斯坦察县 | Constanta (10)"},
        {"11", "科瓦斯纳县 | Covasna (11)"},
        {"12", "登博维察县 | Dâmbovita (12)"},
        {"13", "多尔日县 | Dolj (13)"},
        {"14", "加拉茨县 | Galati (14)"},
        {"15", "久尔久县 | Giurgiu (15)"},
        {"16", "戈尔日县 | Gorj (16)"},
        {"17", "哈尔吉塔县 | Harghita (17)"},
        {"18", "胡内多阿拉县 | Hunedoara (18)"},
        {"19", "雅洛米察县 | Ialomita (19)"},
        {"1A", "雅西县 | Iasi (1A)"},
        {"1B", "伊尔福夫县 | Ilfov (1B)"},
        {"1C", "马拉穆列什县 | Maramures (1C)"},
        {"1D", "梅赫丁茨县 | Mehedinti (1D)"},
        {"1E", "穆列什县 | Mures (1E)"},
        {"1F", "尼亚姆茨县 | Neamt (1F)"},
        {"20", "奥尔特县 | Olt (20)"},
        {"21", "普拉霍瓦县 | Prahova (21)"},
        {"22", "瑟拉日县 | Salaj (22)"},
        {"23", "萨图马雷县 | Satu Mare (23)"},
        {"24", "锡比乌县 | Sibiu (24)"},
        {"25", "苏恰瓦县 | Suceava (25)"},
        {"26", "特列奥尔曼县 | Teleorman (26)"},
        {"27", "蒂米什县 | Timis (27)"},
        {"28", "图尔恰县 | Tulcea (28)"},
        {"29", "沃尔恰县 | Vâlcea (29)"},
        {"2A", "瓦斯卢伊县 | Vaslui (2A)"},
        {"2B", "弗朗恰县 | Vrancea (2B)"}
};

// 俄罗斯地区
State ru_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"09", "莫斯科市 | Moscow City (09)"},
        {"0A", "阿迪格共和国 | Adygey (0A)"},
        {"0B", "戈尔诺-阿尔泰共和国 | Gorno-Altay (0B)"},
        {"0C", "阿尔泰边疆区 | Altay (0C)"},
        {"0D", "阿穆尔州 | Amur (0D)"},
        {"0E", "阿尔汉格尔斯克州 | Arkhangel'sk (0E)"},
        {"0F", "阿斯特拉罕州 | Astrakhan'"},
        {"10", "巴什科尔托斯坦共和国 | Bashkortostan (10)"},
        {"11", "别尔哥罗德州 | Belgorod (11)"},
        {"12", "布良斯克州 | Bryansk (12)"},
        {"13", "布里亚特共和国 | Buryat (13)"},
        {"14", "车臣共和国 | Chechnya (14)"},
        {"15", "车里雅宾斯克州 | Chelyabinsk (15)"},
        {"16", "楚科奇自治区 | Chukot (16)"},
        {"17", "楚瓦什共和国 | Chuvash (17)"},
        {"18", "达吉斯坦共和国 | Dagestan (18)"},
        {"19", "印古什共和国 | Ingushetia (19)"},
        {"1A", "伊尔库茨克州 | Irkutsk (1A)"},
        {"1B", "伊万诺沃州 | Ivanovo (1B)"},
        {"1C", "卡巴尔达-巴尔卡尔共和国 | Kabardin-Balkar (1C)"},
        {"1D", "加里宁格勒州 | Kaliningrad (1D)"},
        {"1E", "卡尔梅克共和国 | Kalmyk (1E)"},
        {"1F", "卡卢加州 | Kaluga (1F)"},
        {"20", "堪察加州 | Kamchatka (20)"},
        {"21", "卡拉恰伊-切尔克斯共和国 | Karachay-Cherkess (21)"},
        {"22", "卡累利阿共和国 | Karelia (22)"},
        {"23", "克麦罗沃州 | Kemerovo (23)"},
        {"24", "哈巴罗夫斯克边疆区 | Khabarovsk (24)"},
        {"25", "哈卡斯共和国 | Khakassia (25)"},
        {"26", "汉特-曼西斯克自治区 | Khanty-Mansiy (26)"},
        {"27", "基洛夫州 | Kirov (27)"},
        {"28", "科米共和国 | Komi (28)"},
        {"29", "科斯特罗马州 | Kostroma (29)"},
        {"2A", "克拉斯诺达尔边疆区 | Krasnodar (2A)"},
        {"2B", "克拉斯诺亚尔斯克边疆区 | Krasnoyarsk (2B)"},
        {"2C", "库尔干州 | Kurgan (2C)"},
        {"2D", "库尔斯克州 | Kursk (2D)"},
        {"2E", "列宁格勒州 | Leningrad (2E)"},
        {"2F", "利佩茨克州 | Lipetsk (2F)"},
        {"30", "马加丹州 | Magadan (30)"},
        {"31", "马里埃尔共和国 | Mariy-El (31)"},
        {"32", "莫尔多瓦共和国 | Mordovia (32)"},
        {"33", "莫斯科州 | Moscow (33)"},
        {"34", "摩尔曼斯克州 | Murmansk (34)"},
        {"35", "涅涅茨自治区 | Nenets (35)"},
        {"36", "下诺夫哥罗德州 | Nizhegorod (36)"},
        {"37", "诺夫哥罗德州 | Novgorod (37)"},
        {"38", "新西伯利亚州 | Novosibirsk (38)"},
        {"39", "鄂木斯克州 | Omsk (39)"},
        {"3A", "奥伦堡州 | Orenburg (3A)"},
        {"3B", "奥廖尔州 | Orel (3B)"},
        {"3C", "奔萨州 | Penza (3C)"},
        {"3D", "彼尔姆边疆区 | Perm'"},
        {"3E", "滨海边疆区 | Primor'ye (3E)"},
        {"3F", "普斯科夫州 | Pskov (3F)"},
        {"40", "罗斯托夫州 | Rostov (40)"},
        {"41", "梁赞州 | Ryazan'"},
        {"42", "萨哈共和国 | Sakha (42)"},
        {"43", "萨哈林州 | Sakhalin (43)"},
        {"44", "萨马拉州 | Samara (44)"},
        {"45", "圣彼得堡 | St. Petersburg (45)"},
        {"46", "萨拉托夫州 | Saratov (46)"},
        {"47", "北奥塞梯共和国 | North Ossetia (47)"},
        {"48", "斯摩棱斯克州 | Smolensk (48)"},
        {"49", "斯塔夫罗波尔边疆区 | Stavropol'"},
        {"4A", "斯维尔德洛夫斯克州 | Sverdlovsk (4A)"},
        {"4B", "坦波夫州 | Tambov (4B)"},
        {"4C", "鞑靼斯坦共和国 | Tatarstan (4C)"},
        {"4D", "托木斯克州 | Tomsk (4D)"},
        {"4E", "图拉州 | Tula (4E)"},
        {"4F", "特维尔州 | Tver'"},
        {"50", "秋明州 | Tyumen'"},
        {"51", "图瓦共和国 | Tuva (51)"},
        {"52", "乌德穆尔特共和国 | Udmurt (52)"},
        {"53", "乌里扬诺夫斯克州 | Ul'yanovsk (53)"},
        {"54", "弗拉基米尔州 | Vladimir (54)"},
        {"55", "伏尔加格勒州 | Volgograd (55)"},
        {"56", "沃洛格达州 | Vologda (56)"},
        {"57", "沃罗涅日州 | Voronezh (57)"},
        {"58", "亚马尔-涅涅茨自治区 | Yamal-Nenets (58)"},
        {"59", "雅罗斯拉夫尔州 | Yaroslavl'"},
        {"5A", "犹太自治州 | Yevrey (5A)"},
        {"5B", "外贝加尔边疆区 | Zabaykal'ye (5B)"}
};

// 塞尔维亚和科索沃地区
State rs_states[] = {
        {"01", "塞尔维亚和科索沃 | Serbia and Kosovo (01)"}
};

// 斯洛伐克地区
State sk_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "布拉迪斯拉发州 | Bratislava (02)"},
        {"03", "班斯卡-比斯特里察州 | Banská Bystrica (03)"},
        {"04", "科希策州 | Košice (04)"},
        {"05", "尼特拉州 | Nitra (05)"},
        {"06", "普雷绍夫州 | Prešov (06)"},
        {"07", "特伦钦州 | Trencín (07)"},
        {"08", "特尔纳瓦州 | Trnava (08)"},
        {"09", "日利纳州 | Žilina (09)"}
};

// 斯洛文尼亚地区
State si_states[] = {
        {"01", "斯洛文尼亚 | Slovenia (01)"}
};

// 南非地区
State za_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "豪登省 | Gauteng (02)"},
        {"03", "西开普省 | Western Cape (03)"},
        {"04", "北开普省 | Northern Cape (04)"},
        {"05", "东开普省 | Eastern Cape (05)"},
        {"06", "夸祖鲁-纳塔尔省 | KwaZulu-Natal (06)"},
        {"07", "自由邦省 | Free State (07)"},
        {"08", "西北省 | North West (08)"},
        {"09", "普马兰加省 | Mpumalanga (09)"},
        {"0A", "林波波省 | Limpopo (0A)"}
};

// 西班牙地区
State es_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "马德里 | Madrid (02)"},
        {"03", "安达卢西亚 | Andalusia (03)"},
        {"04", "阿拉贡 | Aragon (04)"},
        {"05", "阿斯图里亚斯公国 | Principality of Asturias (05)"},
        {"06", "巴利阿里群岛 | Balearic Islands (06)"},
        {"07", "加那利群岛 | Canary Islands (07)"},
        {"08", "坎塔布里亚 | Cantabria (08)"},
        {"09", "卡斯蒂利亚-拉曼恰 | Castile-La Mancha (09)"},
        {"0A", "卡斯蒂利亚和莱昂 | Castilla y León (0A)"},
        {"0B", "加泰罗尼亚 | Catalonia (0B)"},
        {"0C", "巴伦西亚 | Valencia (0C)"},
        {"0D", "埃斯特雷马杜拉 | Extremadura (0D)"},
        {"0E", "加利西亚 | Galicia (0E)"},
        {"0F", "穆尔西亚 | Murcia (0F)"},
        {"10", "纳瓦拉 | Navarre (10)"},
        {"11", "巴斯克地区 | Basque Country (11)"},
        {"12", "拉里奥哈 | La Rioja (12)"},
        {"13", "休达 | Ceuta (13)"},
        {"14", "梅利利亚 | Melilla (14)"}
};

// 斯威士兰地区
State sz_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "霍霍区 | Hhohho (02)"},
        {"03", "卢邦博区 | Lubombo (03)"},
        {"04", "曼齐尼区 | Manzini (04)"},
        {"05", "希塞卢韦尼区 | Shiselweni (05)"}
};

// 瑞典地区
State se_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "斯德哥尔摩省 | Stockholm County (02)"},
        {"03", "斯科讷省 | Skåne County (03)"},
        {"04", "西约塔兰省 | Västra Götaland County (04)"},
        {"05", "东约特兰省 | Östergötland County (05)"},
        {"06", "南曼兰省 | Södermanland County (06)"},
        {"07", "韦姆兰省 | Värmland County (07)"},
        {"08", "乌普萨拉省 | Uppsala County (08)"},
        {"09", "耶夫勒堡省 | Gävleborg County (09)"},
        {"0A", "西博滕省 | Västerbotten County (0A)"},
        {"0B", "北博滕省 | Norrbotten County (0B)"},
        {"0C", "哥特兰岛 | Gotland Island (0C)"},
        {"0D", "耶姆特兰省 | Jämtland County (0D)"},
        {"0E", "达拉纳省 | Dalarna County (0E)"},
        {"0F", "布莱金厄省 | Blekinge County (0F)"},
        {"10", "厄勒布鲁省 | Örebro County (10)"},
        {"11", "西诺尔兰省 | Västernorrland County (11)"},
        {"12", "延雪平省 | Jönköping County (12)"},
        {"13", "克鲁努贝里省 | Kronoberg County (13)"},
        {"14", "卡尔马省 | Kalmar County (14)"},
        {"15", "韦斯特曼兰省 | Västmanland County (15)"},
        {"16", "哈兰省 | Halland County (16)"}
};

// 瑞士地区
State ch_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "伯尔尼州 | Bern (02)"},
        {"04", "阿尔高州 | Aargau (04)"},
        {"05", "巴塞尔城市州 | Basel-City (05)"},
        {"06", "弗里堡州 | Fribourg (06)"},
        {"07", "日内瓦州 | Geneva (07)"},
        {"08", "格拉鲁斯州 | Glarus (08)"},
        {"09", "格劳宾登州 | Graubünden (09)"},
        {"0A", "汝拉州 | Jura (0A)"},
        {"0B", "卢塞恩州 | Luzern (0B)"},
        {"0C", "纳沙泰尔州 | Neuchâtel (0C)"},
        {"0D", "上瓦尔登州 | Obwalden (0D)"},
        {"0E", "圣加仑州 | St. Gallen (0E)"},
        {"0F", "沙夫豪森州 | Schaffhausen (0F)"},
        {"10", "施维茨州 | Schwyz (10)"},
        {"11", "索洛图恩州 | Solothurn (11)"},
        {"12", "图尔高州 | Thurgau (12)"},
        {"13", "提契诺州 | Ticino (13)"},
        {"14", "乌里州 | Uri (14)"},
        {"15", "瓦莱州 | Valais (15)"},
        {"16", "沃州 | Vaud (16)"},
        {"17", "楚格州 | Zug (17)"},
        {"18", "苏黎世州 | Zurich (18)"},
        {"19", "外阿彭策尔州 | Appenzell Outer Rhodes (19)"},
        {"1A", "内阿彭策尔州 | Appenzell Inner Rhodes (1A)"},
        {"1B", "巴塞尔乡村州 | Basel-Landschaft (1B)"},
        {"1C", "下瓦尔登州 | Nidwalden (1C)"}
};

// 土耳其地区
State tr_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "安卡拉 | Ankara (02)"},
        {"03", "伊斯坦布尔 | İstanbul (03)"},
        {"04", "伊兹密尔 | İzmir (04)"},
        {"05", "布尔萨 | Bursa (05)"},
        {"06", "阿达纳 | Adana (06)"},
        {"07", "加济安泰普 | Gaziantep (07)"},
        {"08", "科尼亚 | Konya (08)"},
        {"09", "安塔利亚 | Antalya (09)"},
        {"0A", "迪亚巴克尔 | Diyarbakır (0A)"},
        {"0B", "梅尔辛 | Mersin (0B)"},
        {"0C", "开塞利 | Kayseri (0C)"},
        {"0E", "尚勒乌尔法 | Şanlıurfa (0E)"},
        {"0F", "马拉蒂亚 | Malatya (0F)"},
        {"10", "埃尔祖鲁姆 | Erzurum (10)"},
        {"11", "萨姆松 | Samsun (11)"},
        {"12", "凡城 | Van (12)"},
        {"13", "卡赫拉曼马拉什 | Kahramanmaraş (13)"},
        {"14", "代尼兹利 | Denizli (14)"},
        {"15", "巴特曼 | Batman (15)"},
        {"16", "埃拉泽 | Elazığ (16)"},
        {"17", "萨卡里亚 | Sakarya (17)"},
        {"18", "科贾埃利 | Kocaeli (18)"},
        {"19", "锡瓦斯 | Sivas (19)"},
        {"1A", "马尼萨 | Manisa (1A)"},
        {"1B", "特拉布宗 | Trabzon (1B)"},
        {"1C", "巴勒克埃西尔 | Balıkesir (1C)"},
        {"1D", "阿德亚曼 | Adıyaman (1D)"},
        {"1E", "泰基尔达 | Tekirdağ (1E)"},
        {"1F", "基尔卡莱 | Kırıkkale (1F)"},
        {"20", "奥斯曼尼耶 | Osmaniye (20)"},
        {"21", "屈塔希亚 | Kütahya (21)"},
        {"22", "乔鲁姆 | Çorum (22)"},
        {"23", "伊斯帕尔塔 | Isparta (23)"},
        {"24", "艾登 | Aydın (24)"},
        {"25", "哈塔伊 | Hatay (25)"},
        {"26", "马尔丁 | Mardin (26)"},
        {"27", "阿克萨赖 | Aksaray (27)"},
        {"28", "阿菲永卡拉希萨尔 | Afyonkarahisar (28)"},
        {"29", "托卡特 | Tokat (29)"},
        {"2A", "埃迪尔内 | Edirne (2A)"},
        {"2B", "卡拉曼 | Karaman (2B)"},
        {"2C", "奥尔杜 | Ordu (2C)"},
        {"2D", "锡尔特 | Siirt (2D)"},
        {"2E", "埃尔津詹 | Erzincan (2E)"},
        {"2F", "昌克勒 | Çankırı (2F)"},
        {"30", "宗古尔达克 | Zonguldak (30)"},
        {"31", "约兹加特 | Yozgat (31)"},
        {"32", "乌沙克 | Uşak (32)"},
        {"33", "阿勒 | Ağrı (33)"},
        {"34", "阿马西亚 | Amasya (34)"},
        {"35", "阿尔达汉 | Ardahan (35)"},
        {"36", "阿尔特温 | Artvin (36)"},
        {"37", "巴尔滕 | Bartın (37)"},
        {"38", "巴伊布尔特 | Bayburt (38)"},
        {"39", "比莱吉克 | Bilecik (39)"},
        {"3A", "宾格尔 | Bingöl (3A)"},
        {"3B", "比特利斯 | Bitlis (3B)"},
        {"3C", "博卢 | Bolu (3C)"},
        {"3D", "布尔杜尔 | Burdur (3D)"},
        {"3E", "恰纳卡莱 | Çanakkale (3E)"},
        {"3F", "杜兹塞 | Düzce (3F)"},
        {"40", "埃斯基谢希尔 | Eskişehir (40)"},
        {"41", "吉雷松 | Giresun (41)"},
        {"42", "居米什哈内 | Gümüşhane (42)"},
        {"43", "哈卡里 | Hakkari (43)"},
        {"44", "伊格迪尔 | Iğdır (44)"},
        {"45", "卡拉比克 | Karabük (45)"},
        {"46", "卡尔斯 | Kars (46)"},
        {"47", "卡斯塔莫努 | Kastamonu (47)"},
        {"48", "基利斯 | Kilis (48)"},
        {"49", "克尔克拉雷利 | Kırklareli (49)"},
        {"4A", "克尔谢希尔 | Kırşehir (4A)"},
        {"4B", "穆拉 | Muğla (4B)"},
        {"4C", "穆什 | Muş (4C)"},
        {"4D", "内夫谢希尔 | Nevşehir (4D)"},
        {"4E", "尼代 | Niğde (4E)"},
        {"4F", "里泽 | Rize (4F)"},
        {"50", "锡诺普 | Sinop (50)"},
        {"51", "舍尔纳克 | Şırnak (51)"},
        {"52", "通杰利 | Tunceli (52)"},
        {"53", "亚洛瓦 | Yalova (53)"}
};

// 英国地区
State gb_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "英格兰 | England (02)"},
        {"04", "苏格兰 | Scotland (04)"},
        {"05", "威尔士 | Wales (05)"},
        {"06", "北爱尔兰 | Northern Ireland (06)"}
};

// 赞比亚地区
State zm_states[] = {
        {"01", "赞比亚 | Zambia (01)"}
};

// 津巴布韦地区
State zw_states[] = {
        {"01", "津巴布韦 | Zimbabwe (01)"}
};

// 阿塞拜疆地区
State az_states[] = {
        {"01", "阿塞拜疆 | Azerbaijan (01)"}
};

// 毛里塔尼亚地区
State mr_states[] = {
        {"01", "毛里塔尼亚 | Mauritania (01)"}
};

// 马里地区
State ml_states[] = {
        {"01", "马里 | Mali (01)"}
};

// 尼日尔地区
State ne_states[] = {
        {"01", "尼日尔 | Niger (01)"}
};

// 乍得地区
State td_states[] = {
        {"01", "乍得 | Chad (01)"}
};

// 苏丹地区
State sd_states[] = {
        {"01", "苏丹 | Sudan (01)"}
};

// 厄立特里亚地区
State er_states[] = {
        {"01", "厄立特里亚 | Eritrea (01)"}
};

// 吉布提地区
State dj_states[] = {
        {"01", "吉布提 | Djibouti (01)"}
};

// 索马里地区
State so_states[] = {
        {"01", "索马里 | Somalia (01)"}
};

// 安道尔地区
State ad_states[] = {
        {"01", "安道尔 | Andorra (01)"}
};

// 直布罗陀地区
State gi_states[] = {
        {"01", "直布罗陀 | Gibraltar (01)"}
};

// 根西岛地区
State gg_states[] = {
        {"01", "根西岛 | Guernsey (01)"}
};

// 马恩岛地区
State im_states[] = {
        {"01", "马恩岛 | Isle of Man (01)"}
};

// 泽西岛地区
State je_states[] = {
        {"01", "泽西岛 | Jersey (01)"}
};

// 摩纳哥地区
State mc_states[] = {
        {"01", "摩纳哥 | Monaco (01)"}
};

// 台湾地区（注意：台湾是中国不可分割的一部分）
State tw_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "台北市 | Taipei City (02)"},
        {"03", "高雄市 | Kaohsiung City (03)"},
        {"04", "基隆市 | Keelung City (04)"},
        {"05", "新竹市 | Hsinchu City (05)"},
        {"06", "台中市 | Taichung City (06)"},
        {"07", "嘉义市 | Chiayi City (07)"},
        {"08", "台南市 | Tainan City (08)"},
        {"09", "新北市 | New Taipei City (09)"},
        {"0A", "桃园市 | Taoyuan City (0A)"},
        {"0B", "新竹县 | HsinChu County (0B)"},
        {"0C", "苗栗县 | Miaoli County (0C)"},
        {"0E", "彰化县 | Changhua County (0E)"},
        {"0F", "南投县 | Nantou County (0F)"},
        {"10", "云林县 | Yunlin County (10)"},
        {"11", "嘉义县 | Chiayi County (11)"},
        {"14", "屏东县 | Pingtung County (14)"},
        {"15", "宜兰县 | Yilan County (15)"},
        {"16", "花莲县 | Hualien County (16)"},
        {"17", "台东县 | Taitung County (17)"},
        {"18", "澎湖县 | Penghu County (18)"},
        {"19", "金门县 | Kinmen County (19)"},
        {"1A", "连江县 | Lienchiang County (1A)"}
};

// 韩国地区
State kr_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "首尔特别市 | Seoul-teukbyeolsi (02)"},
        {"03", "釜山广域市 | Busan-gwangyeoksi (03)"},
        {"04", "大邱广域市 | Daegu-gwangyeoksi (04)"},
        {"05", "仁川广域市 | Incheon-gwangyeoksi (05)"},
        {"06", "光州广域市 | Gwangju-gwangyeoksi (06)"},
        {"07", "大田广域市 | Daejeon-gwangyeoksi (07)"},
        {"08", "蔚山广域市 | Ulsan-gwangyeoksi (08)"},
        {"09", "京畿道 | Gyeonggi-do (09)"},
        {"0A", "江原道 | Gangwon-do (0A)"},
        {"0B", "忠清北道 | Chungcheongbuk-do (0B)"},
        {"0C", "忠清南道 | Chungcheongnam-do (0C)"},
        {"0D", "全罗北道 | Jeollabuk-do (0D)"},
        {"0E", "全罗南道 | Jeollanam-do (0E)"},
        {"0F", "庆尚北道 | Gyeongsangbuk-do (0F)"},
        {"10", "庆尚南道 | Gyeongsangnam-do (10)"},
        {"11", "济州特别自治道 | Jeju-teukbyeoljachido (11)"}
};

// 香港地区（中国）
State hk_states[] = {
        {"01", "香港 | Hong Kong (01)"}
};

// 新加坡地区
State sg_states[] = {
        {"01", "新加坡 | Singapore (01)"}
};

// 马来西亚地区
State my_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "吉隆坡 | Kuala Lumpur (02)"},
        {"03", "柔佛州 | Johor (03)"},
        {"04", "吉打州 | Kedah (04)"},
        {"05", "吉兰丹州 | Kelantan (05)"},
        {"06", "马六甲州 | Melaka (06)"},
        {"07", "森美兰州 | Negeri Sembilan (07)"},
        {"08", "彭亨州 | Pahang (08)"},
        {"09", "霹雳州 | Perak (09)"},
        {"0A", "玻璃市州 | Perlis (0A)"},
        {"0B", "槟城州 | Penang (0B)"},
        {"0C", "砂拉越州 | Sarawak (0C)"},
        {"0D", "雪兰莪州 | Selangor (0D)"},
        {"0E", "登嘉楼州 | Terengganu (0E)"},
        {"0F", "纳闽联邦直辖区 | Labuan (0F)"},
        {"10", "沙巴州 | Sabah (10)"},
        {"11", "布城联邦直辖区 | Putrajaya (11)"}
};

// 中国地区
State cn_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "北京市 | Beijing (02)"},
        {"03", "重庆市 | Chongqing (03)"},
        {"04", "上海市 | Shanghai (04)"},
        {"05", "天津市 | Tianjin (05)"},
        {"06", "安徽省 | Anhui (06)"},
        {"07", "福建省 | Fujian (07)"},
        {"08", "甘肃省 | Gansu (08)"},
        {"09", "广东省 | Guangdong (09)"},
        {"0A", "贵州省 | Guizhou (0A)"},
        {"0B", "海南省 | Hainan (0B)"},
        {"0C", "河北省 | Hebei (0C)"},
        {"0D", "黑龙江省 | Heilongjiang (0D)"},
        {"0E", "河南省 | Henan (0E)"},
        {"0F", "湖北省 | Hubei (0F)"},
        {"10", "湖南省 | Húnán (10)"},
        {"11", "江苏省 | Jiangsu (11)"},
        {"12", "江西省 | Jiangxi (12)"},
        {"13", "吉林省 | Jilin (13)"},
        {"14", "辽宁省 | Liaoning (14)"},
        {"15", "青海省 | Qinghai (15)"},
        {"16", "陕西省 | Shaanxi (16)"},
        {"17", "山东省 | Shandong (17)"},
        {"18", "山西省 | Shanxi (18)"},
        {"19", "四川省 | Sichuan (19)"},
        {"1A", "云南省 | Yunnan (1A)"},
        {"1B", "浙江省 | Zhejiang (1B)"},
        {"1D", "广西壮族自治区 | Guangxi-Zhuangzu (1D)"},
        {"1E", "内蒙古自治区 | Nei-Menggu (1E)"},
        {"1F", "宁夏回族自治区 | Ningxia-huizu (1F)"},
        {"20", "新疆维吾尔自治区 | Xinjiang-Weiwu'er-zu (20)"},
        {"21", "西藏自治区 | Xizang (21)"}
};

// 阿联酋地区
State ae_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "阿布扎比 | Abu Dhabi (02)"},
        {"03", "阿治曼 | Ajman (03)"},
        {"04", "沙迦 | Ash Shariqah (04)"},
        {"05", "拉斯海玛 | Ras al-Khaimah (05)"},
        {"06", "迪拜 | Dubai (06)"},
        {"07", "富查伊拉 | Al Fujayrah (07)"},
        {"08", "乌姆盖万 | Umm al Qaywayn (08)"}
};

// 印度地区
State in_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "德里 | Delhi (02)"},
        {"03", "安达曼和尼科巴群岛 | Andaman and Nicobar Islands (03)"},
        {"04", "安得拉邦 | Andhra Pradesh (04)"},
        {"05", "阿萨姆邦 | Assam (05)"},
        {"06", "昌迪加尔 | Chandīgarh (06)"},
        {"07", "达德拉和纳加尔哈维利 | Dadra and Nagar Haveli (07)"},
        {"08", "古吉拉特邦 | Gujarāt (08)"},
        {"09", "哈里亚纳邦 | Haryāna (09)"},
        {"0A", "喜马偕尔邦 | Himachal Pradesh (0A)"},
        {"0C", "喀拉拉邦 | Kerala (0C)"},
        {"0D", "拉克沙群岛 | Lakshadweep (0D)"},
        {"0E", "马哈拉施特拉邦 | Mahārāshtra (0E)"},
        {"0F", "曼尼普尔邦 | Manipur (0F)"},
        {"10", "梅加拉亚邦 | Meghālaya (10)"},
        {"11", "卡纳塔克邦 | Karnātaka (11)"},
        {"12", "那加兰邦 | Nāgāland (12)"},
        {"13", "奥里萨邦 | Odisha (13)"},
        {"14", "本地治里 | Puducherry (14)"},
        {"15", "旁遮普邦 | Punjab (15)"},
        {"16", "拉贾斯坦邦 | Rājasthān (16)"},
        {"17", "泰米尔纳德邦 | Tamil Nadu (17)"},
        {"18", "特里普拉邦 | Tripura (18)"},
        {"19", "西孟加拉邦 | West Bengal (19)"},
        {"1A", "锡金邦 | Sikkim (1A)"},
        {"1C", "米佐拉姆邦 | Mizoram (1C)"},
        {"1D", "达曼和第乌 | Daman and Diu (1D)"},
        {"1E", "果阿邦 | Goa (1E)"},
        {"1F", "比哈尔邦 | Bihār (1F)"},
        {"20", "中央邦 | Madhya Pradesh (20)"},
        {"21", "北方邦 | Uttar Pradesh (21)"},
        {"22", "恰蒂斯加尔邦 | Chhattīsgarh (22)"},
        {"23", "贾坎德邦 | Jharkhand (23)"},
        {"24", "北阿坎德邦 | Uttarakhand (24)"},
        {"25", "其他 | Other (25)"}
};

// 沙特阿拉伯地区
State sa_states[] = {
        {"00", "不设置 | Do not set (00)"},
        {"02", "利雅得 | Ar Riyad (02)"},
        {"03", "巴哈省 | Al Bahah (03)"},
        {"04", "麦地那省 | Al Madinah (04)"},
        {"05", "东部省 | Ash Sharqiyah (05)"},
        {"06", "卡西姆省 | Al Qasim (06)"},
        {"07", "阿西尔省 | 'Asir (07)"},
        {"08", "哈伊勒省 | Ha'il (08)"},
        {"09", "麦加省 | Makkah (09)"},
        {"0A", "北部边境省 | Al Hudud ash Shamaliyah (0A)"},
        {"0B", "奈季兰省 | Najran (0B)"},
        {"0C", "吉赞省 | Jizan (0C)"},
        {"0D", "塔布克省 | Tabuk (0D)"},
        {"0E", "焦夫省 | Al Jawf (0E)"}
};

// 圣马力诺地区
State sm_states[] = {
        {"01", "圣马力诺 | San Marino (01)"}
};

// 梵蒂冈地区
State va_states[] = {
        {"01", "梵蒂冈城 | Vatican City (01)"}
};

// 百慕大地区
State bm_states[] = {
        {"01", "百慕大 | Bermuda (01)"}
};


// 初始化国家的地区指针数组
StatesInfo all_states[] = {
// 日本
        {
                "JP",
                48,
                {
                        &jp_states[0], &jp_states[1], &jp_states[2], &jp_states[3], &jp_states[4],
                                                                                                   &jp_states[5], &jp_states[6], &jp_states[7], &jp_states[8], &jp_states[9],
                        &jp_states[10], &jp_states[11], &jp_states[12], &jp_states[13], &jp_states[14],
                        &jp_states[15], &jp_states[16], &jp_states[17], &jp_states[18], &jp_states[19],
                                                                                                       &jp_states[20], &jp_states[21], &jp_states[22], &jp_states[23], &jp_states[24],
                                                                                                                                                                                   &jp_states[25], &jp_states[26], &jp_states[27], &jp_states[28], &jp_states[29],
                                                                                                                                                                                                                                                                   &jp_states[30], &jp_states[31],&jp_states[32],&jp_states[33],&jp_states[34],&jp_states[35],&jp_states[36],
                                                                                                                                                                                                                                                                                                                                                                               &jp_states[37],&jp_states[38],&jp_states[39],&jp_states[40],&jp_states[41],
                                                                                                                                                                                                                                                                                                                                                                                                                                                            &jp_states[42],&jp_states[43],&jp_states[44],&jp_states[45],&jp_states[46],
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         &jp_states[47]
                }
        },
// 安圭拉
        {
                "AI",
                1,
                {
                        &ai_states[0]
                }
        },
// 安提瓜和巴布达
        {
                "AG",
                8,
                {
                        &ag_states[0], &ag_states[1], &ag_states[2], &ag_states[3],
                                                                                    &ag_states[4], &ag_states[5], &ag_states[6], &ag_states[7]
                }
        },
// 阿根廷
        {
                "AR",
                25,
                {
                        &ar_states[0], &ar_states[1], &ar_states[2], &ar_states[3], &ar_states[4],
                                                                                                   &ar_states[5], &ar_states[6], &ar_states[7], &ar_states[8], &ar_states[9],
                        &ar_states[10], &ar_states[11], &ar_states[12], &ar_states[13], &ar_states[14],
                        &ar_states[15], &ar_states[16], &ar_states[17], &ar_states[18], &ar_states[19],&ar_states[20],&ar_states[21],&ar_states[22],&ar_states[23],&ar_states[24]
                }
        },
// 阿鲁巴
        {
                "AW",
                1,
                {
                        &aw_states[0]
                }
        },
// 巴哈马
        {
                "BS",
                1,
                {
                        &bs_states[0]
                }
        },
// 巴巴多斯
        {
                "BB",
                1,
                {
                        &bb_states[0]
                }
        },
// 伯利兹
        {
                "BZ",
                7,
                {
                        &bz_states[0], &bz_states[1], &bz_states[2], &bz_states[3],
                                                                                    &bz_states[4], &bz_states[5], &bz_states[6]
                }
        },
// 玻利维亚
        {
                "BO",
                10,
                {
                        &bo_states[0], &bo_states[1], &bo_states[2], &bo_states[3], &bo_states[4],
                                                                                                   &bo_states[5], &bo_states[6], &bo_states[7], &bo_states[8], &bo_states[9]
                }
        },
// 巴西
        {
                "BR",
                28,
                {
                        &br_states[0], &br_states[1], &br_states[2], &br_states[3], &br_states[4],
                                                                                                   &br_states[5], &br_states[6], &br_states[7], &br_states[8], &br_states[9],
                        &br_states[10], &br_states[11], &br_states[12], &br_states[13], &br_states[14],
                        &br_states[15], &br_states[16], &br_states[17], &br_states[18], &br_states[19],
                                                                                                       &br_states[20], &br_states[21], &br_states[22], &br_states[23], &br_states[24],
                                                                                                                                                                                   &br_states[25], &br_states[26], &br_states[27]
                }
        },
// 英属维尔京群岛
        {
                "VG",
                1,
                {
                        &vg_states[0]
                }
        },
// 加拿大
        {
                "CA",
                14,
                {
                        &ca_states[0], &ca_states[1], &ca_states[2], &ca_states[3], &ca_states[4],
                                                                                                   &ca_states[5], &ca_states[6], &ca_states[7], &ca_states[8], &ca_states[9],
                        &ca_states[10], &ca_states[11], &ca_states[12], &ca_states[13]
                }
        },
// 开曼群岛
        {
                "KY",
                1,
                {
                        &ky_states[0]
                }
        },
// 智利
        {
                "CL",
                14,
                {
                        &cl_states[0], &cl_states[1], &cl_states[2], &cl_states[3], &cl_states[4],
                                                                                                   &cl_states[5], &cl_states[6], &cl_states[7], &cl_states[8], &cl_states[9],
                        &cl_states[10], &cl_states[11], &cl_states[12], &cl_states[13]
                }
        },
// 哥伦比亚
        {
                "CO",
                34,
                {
                        &co_states[0], &co_states[1], &co_states[2], &co_states[3], &co_states[4],
                                                                                                   &co_states[5], &co_states[6], &co_states[7], &co_states[8], &co_states[9],
                        &co_states[10], &co_states[11], &co_states[12], &co_states[13], &co_states[14],
                        &co_states[15], &co_states[16], &co_states[17], &co_states[18], &co_states[19],
                                                                                                       &co_states[20], &co_states[21],&co_states[22],&co_states[23],&co_states[24],&co_states[25],&co_states[26],
                                                                                                                                                                                                                   &co_states[27], &co_states[28], &co_states[29], &co_states[30], &co_states[31], &co_states[32], &co_states[33]
                }
        },
// 哥斯达黎加
        {
                "CR",
                8,
                {
                        &cr_states[0], &cr_states[1], &cr_states[2], &cr_states[3],
                                                                                    &cr_states[4], &cr_states[5], &cr_states[6], &cr_states[7]
                }
        },
// 多米尼克
        {
                "DM",
                1,
                {
                        &dm_states[0]
                }
        },
// 多米尼加共和国
        {
                "DO",
                31,
                {
                        &do_states[0], &do_states[1], &do_states[2], &do_states[3], &do_states[4],
                                                                                                   &do_states[5], &do_states[6], &do_states[7], &do_states[8], &do_states[9],
                        &do_states[10], &do_states[11], &do_states[12], &do_states[13], &do_states[14],
                        &do_states[15], &do_states[16], &do_states[17], &do_states[18], &do_states[19],
                                                                                                       &do_states[20], &do_states[21], &do_states[22], &do_states[23], &do_states[24],
                                                                                                                                                                                   &do_states[25], &do_states[26], &do_states[27], &do_states[28], &do_states[29],
                                                                                                                                                                                                                                                                   &do_states[30]
                }
        },
// 厄瓜多尔
        {
                "EC",
                25,
                {
                        &ec_states[0], &ec_states[1], &ec_states[2], &ec_states[3], &ec_states[4],
                                                                                                   &ec_states[5], &ec_states[6], &ec_states[7], &ec_states[8], &ec_states[9],
                        &ec_states[10], &ec_states[11], &ec_states[12], &ec_states[13], &ec_states[14],
                        &ec_states[15], &ec_states[16], &ec_states[17], &ec_states[18], &ec_states[19],
                                                                                                       &ec_states[20], &ec_states[21], &ec_states[22], &ec_states[23], &ec_states[24]
                }
        },
// 萨尔瓦多
        {
                "SV",
                15,
                {
                        &sv_states[0], &sv_states[1], &sv_states[2], &sv_states[3], &sv_states[4],
                                                                                                   &sv_states[5], &sv_states[6], &sv_states[7], &sv_states[8], &sv_states[9],
                        &sv_states[10], &sv_states[11], &sv_states[12], &sv_states[13], &sv_states[14]
                }
        },
// 法属圭亚那
        {
                "GF",
                1,
                {
                        &gf_states[0]
                }
        },
// 格林纳达
        {
                "GD",
                1,
                {
                        &gd_states[0]
                }
        },
// 瓜德罗普
        {
                "GP",
                1,
                {
                        &gp_states[0]
                }
        },
// 危地马拉
        {
                "GT",
                23,
                {
                        &gt_states[0], &gt_states[1], &gt_states[2], &gt_states[3], &gt_states[4],
                                                                                                   &gt_states[5], &gt_states[6], &gt_states[7], &gt_states[8], &gt_states[9],
                        &gt_states[10], &gt_states[11], &gt_states[12], &gt_states[13], &gt_states[14],
                        &gt_states[15], &gt_states[16], &gt_states[17], &gt_states[18], &gt_states[19],
                                                                                                       &gt_states[20], &gt_states[21], &gt_states[22]
                }
        },
// 圭亚那
        {
                "GY",
                11,
                {
                        &gy_states[0], &gy_states[1], &gy_states[2], &gy_states[3], &gy_states[4],
                                                                                                   &gy_states[5], &gy_states[6], &gy_states[7], &gy_states[8], &gy_states[9],
                        &gy_states[10]
                }
        },
// 海地
        {
                "HT",
                11,
                {
                        &ht_states[0], &ht_states[1], &ht_states[2], &ht_states[3], &ht_states[4],
                                                                                                   &ht_states[5], &ht_states[6], &ht_states[7], &ht_states[8], &ht_states[9],
                        &ht_states[10]
                }
        },
// 洪都拉斯
        {
                "HN",
                19,
                {
                        &hn_states[0], &hn_states[1], &hn_states[2], &hn_states[3], &hn_states[4],
                                                                                                   &hn_states[5], &hn_states[6], &hn_states[7], &hn_states[8], &hn_states[9],
                        &hn_states[10], &hn_states[11], &hn_states[12], &hn_states[13], &hn_states[14],
                        &hn_states[15], &hn_states[16], &hn_states[17], &hn_states[18]
                }
        },
// 牙买加
        {
                "JM",
                15,
                {
                        &jm_states[0], &jm_states[1], &jm_states[2], &jm_states[3], &jm_states[4],
                                                                                                   &jm_states[5], &jm_states[6], &jm_states[7], &jm_states[8], &jm_states[9],
                        &jm_states[10], &jm_states[11], &jm_states[12], &jm_states[13], &jm_states[14]
                }
        },
// 马提尼克
        {
                "MQ",
                1,
                {
                        &mq_states[0]
                }
        },
// 墨西哥
        {
                "MX",
                33,
                {
                        &mx_states[0], &mx_states[1], &mx_states[2], &mx_states[3], &mx_states[4],
                                                                                                   &mx_states[5], &mx_states[6], &mx_states[7], &mx_states[8], &mx_states[9],
                        &mx_states[10], &mx_states[11], &mx_states[12], &mx_states[13], &mx_states[14],
                        &mx_states[15], &mx_states[16], &mx_states[17], &mx_states[18], &mx_states[19],
                                                                                                       &mx_states[20], &mx_states[21], &mx_states[22], &mx_states[23], &mx_states[24],
                                                                                                                                                                                   &mx_states[25], &mx_states[26], &mx_states[27], &mx_states[28], &mx_states[29],
                                                                                                                                                                                                                                                                   &mx_states[30], &mx_states[31], &mx_states[32]
                }
        },
// 蒙特塞拉特
        {
                "MS",
                1,
                {
                        &ms_states[0]
                }
        },
// 荷属安的列斯
        {
                "AN",
                1,
                {
                        &an_states[0]
                }
        },
// 尼加拉瓜
        {
                "NI",
                18,
                {
                        &ni_states[0], &ni_states[1], &ni_states[2], &ni_states[3], &ni_states[4],
                                                                                                   &ni_states[5], &ni_states[6], &ni_states[7], &ni_states[8], &ni_states[9],
                        &ni_states[10], &ni_states[11], &ni_states[12], &ni_states[13], &ni_states[14],
                        &ni_states[15], &ni_states[16], &ni_states[17]
                }
        },
// 巴拿马
        {
                "PA",
                11,
                {
                        &pa_states[0], &pa_states[1], &pa_states[2], &pa_states[3], &pa_states[4],
                                                                                                   &pa_states[5], &pa_states[6], &pa_states[7], &pa_states[8], &pa_states[9],
                        &pa_states[10]
                }
        },
// 巴拉圭
        {
                "PY",
                19,
                {
                        &py_states[0], &py_states[1], &py_states[2], &py_states[3], &py_states[4],
                                                                                                   &py_states[5], &py_states[6], &py_states[7], &py_states[8], &py_states[9],
                        &py_states[10], &py_states[11], &py_states[12], &py_states[13], &py_states[14],
                        &py_states[15], &py_states[16], &py_states[17], &py_states[18]
                }
        },
// 秘鲁
        {
                "PE",
                26,
                {
                        &pe_states[0], &pe_states[1], &pe_states[2], &pe_states[3], &pe_states[4],
                                                                                                   &pe_states[5], &pe_states[6], &pe_states[7], &pe_states[8], &pe_states[9],
                        &pe_states[10], &pe_states[11], &pe_states[12], &pe_states[13], &pe_states[14],
                        &pe_states[15], &pe_states[16], &pe_states[17], &pe_states[18], &pe_states[19],
                                                                                                       &pe_states[20], &pe_states[21], &pe_states[22], &pe_states[23], &pe_states[24],
                                                                                                                                                                                   &pe_states[25]
                }
        },
// 圣基茨和尼维斯
        {
                "KN",
                15,
                {
                        &kn_states[0], &kn_states[1], &kn_states[2], &kn_states[3], &kn_states[4],
                                                                                                   &kn_states[5], &kn_states[6], &kn_states[7], &kn_states[8], &kn_states[9],
                        &kn_states[10], &kn_states[11], &kn_states[12], &kn_states[13], &kn_states[14]
                }
        },
// 圣卢西亚
        {
                "LC",
                1,
                {
                        &lc_states[0]
                }
        },
// 圣文森特和格林纳丁斯
        {
                "VC",
                1,
                {
                        &vc_states[0]
                }
        },
// 苏里南
        {
                "SR",
                11,
                {
                        &sr_states[0], &sr_states[1], &sr_states[2], &sr_states[3], &sr_states[4],
                                                                                                   &sr_states[5], &sr_states[6], &sr_states[7], &sr_states[8], &sr_states[9],
                        &sr_states[10]
                }
        },
// 特立尼达和多巴哥
        {
                "TT",
                14,
                {
                        &tt_states[0], &tt_states[1], &tt_states[2], &tt_states[3], &tt_states[4],
                                                                                                   &tt_states[5], &tt_states[6], &tt_states[7], &tt_states[8], &tt_states[9],
                        &tt_states[10], &tt_states[11], &tt_states[12], &tt_states[13]
                }
        },
// 特克斯和凯科斯群岛
        {
                "TC",
                1,
                {
                        &tc_states[0]
                }
        },
// 美国
        {
                "US",
                53,
                {
                        &us_states[0], &us_states[1], &us_states[2], &us_states[3], &us_states[4],
                                                                                                   &us_states[5], &us_states[6], &us_states[7], &us_states[8], &us_states[9],
                        &us_states[10], &us_states[11], &us_states[12], &us_states[13], &us_states[14],
                        &us_states[15], &us_states[16], &us_states[17], &us_states[18], &us_states[19],
                                                                                                       &us_states[20], &us_states[21], &us_states[22], &us_states[23], &us_states[24],
                                                                                                                                                                                   &us_states[25], &us_states[26], &us_states[27], &us_states[28], &us_states[29],
                                                                                                                                                                                                                                                                   &us_states[30], &us_states[31], &us_states[32], &us_states[33], &us_states[34],
                                                                                                                                                                                                                                                                                                                                               &us_states[35], &us_states[36], &us_states[37], &us_states[38], &us_states[39],
                                                                                                                                                                                                                                                                                                                                                                                                                            &us_states[40], &us_states[41], &us_states[42], &us_states[43], &us_states[44],
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         &us_states[45], &us_states[46], &us_states[47], &us_states[48], &us_states[49],
                        &us_states[50], &us_states[51], &us_states[52]
                }
        },
// 乌拉圭
        {
                "UY",
                20,
                {
                        &uy_states[0], &uy_states[1], &uy_states[2], &uy_states[3], &uy_states[4],
                                                                                                   &uy_states[5], &uy_states[6], &uy_states[7], &uy_states[8], &uy_states[9],
                        &uy_states[10], &uy_states[11], &uy_states[12], &uy_states[13], &uy_states[14],
                        &uy_states[15], &uy_states[16], &uy_states[17], &uy_states[18], &uy_states[19]
                }
        },
// 美属维尔京群岛
        {
                "VI",
                1,
                {
                        &vi_states[0]
                }
        },
// 委内瑞拉
        {
                "VE",
                26,
                {
                        &ve_states[0], &ve_states[1], &ve_states[2], &ve_states[3], &ve_states[4],
                                                                                                   &ve_states[5], &ve_states[6], &ve_states[7], &ve_states[8], &ve_states[9],
                        &ve_states[10], &ve_states[11], &ve_states[12], &ve_states[13], &ve_states[14],
                        &ve_states[15], &ve_states[16], &ve_states[17], &ve_states[18], &ve_states[19],
                                                                                                       &ve_states[20], &ve_states[21], &ve_states[22], &ve_states[23], &ve_states[24],
                                                                                                                                                                                   &ve_states[25]
                }
        },
// 阿尔巴尼亚
        {
                "AL",
                13,
                {
                        &al_states[0], &al_states[1], &al_states[2], &al_states[3], &al_states[4],
                                                                                                   &al_states[5], &al_states[6], &al_states[7], &al_states[8], &al_states[9],
                        &al_states[10], &al_states[11], &al_states[12]
                }
        },
// 澳大利亚
        {
                "AU",
                9,
                {
                        &au_states[0], &au_states[1], &au_states[2], &au_states[3], &au_states[4],
                                                                                                   &au_states[5], &au_states[6], &au_states[7], &au_states[8]
                }
        },
// 奥地利
        {
                "AT",
                10,
                {
                        &at_states[0], &at_states[1], &at_states[2], &at_states[3], &at_states[4],
                                                                                                   &at_states[5], &at_states[6], &at_states[7], &at_states[8], &at_states[9]
                }
        },
// 比利时
        {
                "BE",
                4,
                {
                        &be_states[0], &be_states[1], &be_states[2], &be_states[3]
                }
        },
// 波斯尼亚和黑塞哥维那
        {
                "BA",
                4,
                {
                        &ba_states[0], &ba_states[1], &ba_states[2], &ba_states[3]
                }
        },
// 博茨瓦纳
        {
                "BW",
                1,
                {
                        &bw_states[0]
                }
        },
// 保加利亚
        {
                "BG",
                29,
                {
                        &bg_states[0], &bg_states[1], &bg_states[2], &bg_states[3], &bg_states[4],
                                                                                                   &bg_states[5], &bg_states[6], &bg_states[7], &bg_states[8], &bg_states[9],
                        &bg_states[10], &bg_states[11], &bg_states[12], &bg_states[13], &bg_states[14],
                        &bg_states[15], &bg_states[16], &bg_states[17], &bg_states[18], &bg_states[19],
                                                                                                       &bg_states[20], &bg_states[21], &bg_states[22], &bg_states[23], &bg_states[24],
                                                                                                                                                                                   &bg_states[25], &bg_states[26], &bg_states[27], &bg_states[28]
                }
        },
// 克罗地亚
        {
                "HR",
                22,
                {
                        &hr_states[0], &hr_states[1], &hr_states[2], &hr_states[3], &hr_states[4],
                                                                                                   &hr_states[5], &hr_states[6], &hr_states[7], &hr_states[8], &hr_states[9],
                        &hr_states[10], &hr_states[11], &hr_states[12], &hr_states[13], &hr_states[14],
                        &hr_states[15], &hr_states[16], &hr_states[17], &hr_states[18], &hr_states[19],
                                                                                                       &hr_states[20], &hr_states[21]
                }
        },
// 塞浦路斯
        {
                "CY",
                1,
                {
                        &cy_states[0]
                }
        },
// 捷克共和国
        {
                "CZ",
                15,
                {
                        &cz_states[0], &cz_states[1], &cz_states[2], &cz_states[3], &cz_states[4],
                                                                                                   &cz_states[5], &cz_states[6], &cz_states[7], &cz_states[8], &cz_states[9],
                        &cz_states[10], &cz_states[11], &cz_states[12], &cz_states[13], &cz_states[14]
                }
        },
// 丹麦
        {
                "DK",
                8,
                {
                        &dk_states[0], &dk_states[1], &dk_states[2], &dk_states[3],
                                                                                    &dk_states[4], &dk_states[5], &dk_states[6], &dk_states[7]
                }
        },
// 爱沙尼亚
        {
                "EE",
                1,
                {
                        &ee_states[0]
                }
        },
// 芬兰
        {
                "FI",
                21,
                {
                        &fi_states[0], &fi_states[1], &fi_states[2], &fi_states[3], &fi_states[4],
                                                                                                   &fi_states[5], &fi_states[6], &fi_states[7], &fi_states[8], &fi_states[9],
                        &fi_states[10], &fi_states[11], &fi_states[12], &fi_states[13], &fi_states[14],
                        &fi_states[15], &fi_states[16], &fi_states[17], &fi_states[18], &fi_states[19],
                                                                                                       &fi_states[20]
                }
        },
// 法国
        {
                "FR",
                27,
                {
                        &fr_states[0], &fr_states[1], &fr_states[2], &fr_states[3], &fr_states[4],
                                                                                                   &fr_states[5], &fr_states[6], &fr_states[7], &fr_states[8], &fr_states[9],
                        &fr_states[10], &fr_states[11], &fr_states[12], &fr_states[13], &fr_states[14],
                        &fr_states[15], &fr_states[16], &fr_states[17], &fr_states[18], &fr_states[19],
                                                                                                       &fr_states[20], &fr_states[21], &fr_states[22], &fr_states[23], &fr_states[24],
                                                                                                                                                                                   &fr_states[25], &fr_states[26]
                }
        },
// 德国
        {
                "DE",
                17,
                {
                        &de_states[0], &de_states[1], &de_states[2], &de_states[3], &de_states[4],
                                                                                                   &de_states[5], &de_states[6], &de_states[7], &de_states[8], &de_states[9],
                        &de_states[10], &de_states[11], &de_states[12], &de_states[13], &de_states[14],
                        &de_states[15], &de_states[16]
                }
        },
// 希腊
        {
                "GR",
                14,
                {
                        &gr_states[0], &gr_states[1], &gr_states[2], &gr_states[3], &gr_states[4],
                                                                                                   &gr_states[5], &gr_states[6], &gr_states[7], &gr_states[8], &gr_states[9],
                        &gr_states[10], &gr_states[11], &gr_states[12], &gr_states[13]
                }
        },
// 匈牙利
        {
                "HU",
                21,
                {
                        &hu_states[0], &hu_states[1], &hu_states[2], &hu_states[3], &hu_states[4],
                                                                                                   &hu_states[5], &hu_states[6], &hu_states[7], &hu_states[8], &hu_states[9],
                        &hu_states[10], &hu_states[11], &hu_states[12], &hu_states[13], &hu_states[14],
                        &hu_states[15], &hu_states[16], &hu_states[17], &hu_states[18], &hu_states[19],
                                                                                                       &hu_states[20]
                }
        },
// 冰岛
        {
                "IS",
                1,
                {
                        &is_states[0]
                }
        },
// 爱尔兰
        {
                "IE",
                27,
                {
                        &ie_states[0], &ie_states[1], &ie_states[2], &ie_states[3], &ie_states[4],
                                                                                                   &ie_states[5], &ie_states[6], &ie_states[7], &ie_states[8], &ie_states[9],
                        &ie_states[10], &ie_states[11], &ie_states[12], &ie_states[13], &ie_states[14],
                        &ie_states[15], &ie_states[16], &ie_states[17], &ie_states[18], &ie_states[19],
                                                                                                       &ie_states[20], &ie_states[21], &ie_states[22], &ie_states[23], &ie_states[24],
                                                                                                                                                                                   &ie_states[25], &ie_states[26]
                }
        },
// 意大利
        {
                "IT",
                21,
                {
                        &it_states[0], &it_states[1], &it_states[2], &it_states[3], &it_states[4],
                                                                                                   &it_states[5], &it_states[6], &it_states[7], &it_states[8], &it_states[9],
                        &it_states[10], &it_states[11], &it_states[12], &it_states[13], &it_states[14],
                        &it_states[15], &it_states[16], &it_states[17], &it_states[18], &it_states[19],
                                                                                                       &it_states[20]
                }
        },
// 拉脱维亚
        {
                "LV",
                1,
                {
                        &lv_states[0]
                }
        },
// 莱索托
        {
                "LS",
                11,
                {
                        &ls_states[0], &ls_states[1], &ls_states[2], &ls_states[3], &ls_states[4],
                                                                                                   &ls_states[5], &ls_states[6], &ls_states[7], &ls_states[8], &ls_states[9],
                        &ls_states[10]
                }
        },
// 列支敦士登
        {
                "LI",
                1,
                {
                        &li_states[0]
                }
        },
// 立陶宛
        {
                "LT",
                11,
                {
                        &lt_states[0], &lt_states[1], &lt_states[2], &lt_states[3], &lt_states[4],
                                                                                                   &lt_states[5], &lt_states[6], &lt_states[7], &lt_states[8], &lt_states[9],
                        &lt_states[10]
                }
        },
// 卢森堡
        {
                "LU",
                1,
                {
                        &lu_states[0]
                }
        },
// 马其顿
        {
                "MK",
                1,
                {
                        &mk_states[0]
                }
        },
// 马耳他
        {
                "MT",
                1,
                {
                        &mt_states[0]
                }
        },
// 黑山
        {
                "ME",
                1,
                {
                        &me_states[0]
                }
        },
// 莫桑比克
        {
                "MZ",
                1,
                {
                        &mz_states[0]
                }
        },
// 纳米比亚
        {
                "NA",
                1,
                {
                        &na_states[0]
                }
        },
// 荷兰
        {
                "NL",
                13,
                {
                        &nl_states[0], &nl_states[1], &nl_states[2], &nl_states[3], &nl_states[4],
                                                                                                   &nl_states[5], &nl_states[6], &nl_states[7], &nl_states[8], &nl_states[9],
                        &nl_states[10], &nl_states[11], &nl_states[12]
                }
        },
// 新西兰
        {
                "NZ",
                17,
                {
                        &nz_states[0], &nz_states[1], &nz_states[2], &nz_states[3], &nz_states[4],
                                                                                                   &nz_states[5], &nz_states[6], &nz_states[7], &nz_states[8], &nz_states[9],
                        &nz_states[10], &nz_states[11], &nz_states[12], &nz_states[13], &nz_states[14],
                        &nz_states[15], &nz_states[16]
                }
        },
// 挪威
        {
                "NO",
                22,
                {
                        &no_states[0], &no_states[1], &no_states[2], &no_states[3], &no_states[4],
                                                                                                   &no_states[5], &no_states[6], &no_states[7], &no_states[8], &no_states[9],
                        &no_states[10], &no_states[11], &no_states[12], &no_states[13], &no_states[14],
                        &no_states[15],&no_states[16],&no_states[17],&no_states[18],&no_states[19],
                                                                                                       &no_states[20],&no_states[21]
                }
        },
// 波兰
        {
                "PL",
                17,
                {
                        &pl_states[0], &pl_states[1], &pl_states[2], &pl_states[3], &pl_states[4],
                                                                                                   &pl_states[5], &pl_states[6], &pl_states[7], &pl_states[8], &pl_states[9],
                        &pl_states[10], &pl_states[11], &pl_states[12], &pl_states[13], &pl_states[14],
                        &pl_states[15], &pl_states[16]
                }
        },
// 葡萄牙
        {
                "PT",
                21,
                {
                        &pt_states[0], &pt_states[1], &pt_states[2], &pt_states[3], &pt_states[4],
                                                                                                   &pt_states[5], &pt_states[6], &pt_states[7], &pt_states[8], &pt_states[9],
                        &pt_states[10], &pt_states[11], &pt_states[12], &pt_states[13], &pt_states[14],
                        &pt_states[15], &pt_states[16], &pt_states[17], &pt_states[18], &pt_states[19],
                                                                                                       &pt_states[20]
                }
        },
// 罗马尼亚
        {
                "RO",
                43,
                {
                        &ro_states[0], &ro_states[1], &ro_states[2], &ro_states[3], &ro_states[4],
                                                                                                   &ro_states[5], &ro_states[6], &ro_states[7], &ro_states[8], &ro_states[9],
                        &ro_states[10], &ro_states[11], &ro_states[12], &ro_states[13], &ro_states[14],
                        &ro_states[15], &ro_states[16], &ro_states[17], &ro_states[18], &ro_states[19],
                                                                                                       &ro_states[20], &ro_states[21], &ro_states[22], &ro_states[23], &ro_states[24],
                                                                                                                                                                                   &ro_states[25], &ro_states[26], &ro_states[27], &ro_states[28], &ro_states[29],
                                                                                                                                                                                                                                                                   &ro_states[30], &ro_states[31], &ro_states[32], &ro_states[33], &ro_states[34],
                                                                                                                                                                                                                                                                                                                                               &ro_states[35], &ro_states[36], &ro_states[37], &ro_states[38], &ro_states[39],
                                                                                                                                                                                                                                                                                                                                                                                                                            &ro_states[40], &ro_states[41], &ro_states[42]
                }
        },
// 俄罗斯
        {
                "RU",
                84,
                {
                        &ru_states[0], &ru_states[1], &ru_states[2], &ru_states[3], &ru_states[4],
                                                                                                   &ru_states[5], &ru_states[6], &ru_states[7], &ru_states[8], &ru_states[9],
                        &ru_states[10], &ru_states[11], &ru_states[12], &ru_states[13], &ru_states[14],
                        &ru_states[15], &ru_states[16], &ru_states[17], &ru_states[18], &ru_states[19],
                                                                                                       &ru_states[20], &ru_states[21], &ru_states[22], &ru_states[23], &ru_states[24],
                                                                                                                                                                                   &ru_states[25], &ru_states[26], &ru_states[27], &ru_states[28], &ru_states[29],
                                                                                                                                                                                                                                                                   &ru_states[30], &ru_states[31], &ru_states[32], &ru_states[33], &ru_states[34],
                                                                                                                                                                                                                                                                                                                                               &ru_states[35], &ru_states[36], &ru_states[37], &ru_states[38], &ru_states[39],
                                                                                                                                                                                                                                                                                                                                                                                                                            &ru_states[40], &ru_states[41], &ru_states[42], &ru_states[43], &ru_states[44],
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         &ru_states[45], &ru_states[46], &ru_states[47], &ru_states[48], &ru_states[49],
                        &ru_states[50], &ru_states[51], &ru_states[52], &ru_states[53], &ru_states[54],
                        &ru_states[55], &ru_states[56], &ru_states[57], &ru_states[58], &ru_states[59],
                        &ru_states[60], &ru_states[61], &ru_states[62], &ru_states[63], &ru_states[64],
                        &ru_states[65], &ru_states[66], &ru_states[67], &ru_states[68], &ru_states[69],
                        &ru_states[70], &ru_states[71], &ru_states[72], &ru_states[73], &ru_states[74],
                        &ru_states[75], &ru_states[76], &ru_states[77], &ru_states[78], &ru_states[79],
                        &ru_states[80], &ru_states[81], &ru_states[82], &ru_states[83]
                }
        },
// 塞尔维亚和科索沃
        {
                "RS",
                1,
                {
                        &rs_states[0]
                }
        },
// 斯洛伐克
        {
                "SK",
                9,
                {
                        &sk_states[0], &sk_states[1], &sk_states[2], &sk_states[3], &sk_states[4],
                                                                                                   &sk_states[5], &sk_states[6], &sk_states[7], &sk_states[8]
                }
        },
// 斯洛文尼亚
        {
                "SI",
                1,
                {
                        &si_states[0]
                }
        },
// 南非
        {
                "ZA",
                10,
                {
                        &za_states[0], &za_states[1], &za_states[2], &za_states[3], &za_states[4],
                                                                                                   &za_states[5], &za_states[6], &za_states[7], &za_states[8], &za_states[9]
                }
        },
// 西班牙
        {
                "ES",
                20,
                {
                        &es_states[0], &es_states[1], &es_states[2], &es_states[3], &es_states[4],
                                                                                                   &es_states[5], &es_states[6], &es_states[7], &es_states[8], &es_states[9],
                        &es_states[10], &es_states[11], &es_states[12], &es_states[13], &es_states[14],
                        &es_states[15], &es_states[16], &es_states[17], &es_states[18], &es_states[19]
                }
        },
// 斯威士兰
        {
                "SZ",
                5,
                {
                        &sz_states[0], &sz_states[1], &sz_states[2], &sz_states[3], &sz_states[4]
                }
        },
// 瑞典
        {
                "SE",
                22,
                {
                        &se_states[0], &se_states[1], &se_states[2], &se_states[3], &se_states[4],
                                                                                                   &se_states[5], &se_states[6], &se_states[7], &se_states[8], &se_states[9],
                        &se_states[10], &se_states[11], &se_states[12], &se_states[13], &se_states[14],
                        &se_states[15], &se_states[16], &se_states[17], &se_states[18], &se_states[19],
                                                                                                       &se_states[20], &se_states[21]
                }
        },
// 瑞士
        {
                "CH",
                27,
                {
                        &ch_states[0], &ch_states[1], &ch_states[2], &ch_states[3], &ch_states[4],
                                                                                                   &ch_states[5], &ch_states[6], &ch_states[7], &ch_states[8], &ch_states[9],
                        &ch_states[10], &ch_states[11], &ch_states[12], &ch_states[13], &ch_states[14],
                        &ch_states[15], &ch_states[16], &ch_states[17], &ch_states[18], &ch_states[19],
                                                                                                       &ch_states[20], &ch_states[21], &ch_states[22], &ch_states[23], &ch_states[24],
                                                                                                                                                                                   &ch_states[25], &ch_states[26]
                }
        },
// 土耳其
        {
                "TR",
                82,
                {
                        &tr_states[0], &tr_states[1], &tr_states[2], &tr_states[3], &tr_states[4],
                                                                                                   &tr_states[5], &tr_states[6], &tr_states[7], &tr_states[8], &tr_states[9],
                        &tr_states[10], &tr_states[11], &tr_states[12], &tr_states[13], &tr_states[14],
                        &tr_states[15], &tr_states[16], &tr_states[17], &tr_states[18], &tr_states[19],
                                                                                                       &tr_states[20], &tr_states[21], &tr_states[22], &tr_states[23], &tr_states[24],
                                                                                                                                                                                   &tr_states[25], &tr_states[26], &tr_states[27], &tr_states[28], &tr_states[29],
                                                                                                                                                                                                                                                                   &tr_states[30], &tr_states[31], &tr_states[32], &tr_states[33], &tr_states[34],
                                                                                                                                                                                                                                                                                                                                               &tr_states[35], &tr_states[36], &tr_states[37], &tr_states[38], &tr_states[39],
                                                                                                                                                                                                                                                                                                                                                                                                                            &tr_states[40], &tr_states[41], &tr_states[42], &tr_states[43], &tr_states[44],
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         &tr_states[45], &tr_states[46], &tr_states[47], &tr_states[48], &tr_states[49],
                        &tr_states[50], &tr_states[51], &tr_states[52], &tr_states[53], &tr_states[54],
                        &tr_states[55], &tr_states[56], &tr_states[57], &tr_states[58], &tr_states[59],
                        &tr_states[60], &tr_states[61], &tr_states[62], &tr_states[63], &tr_states[64],
                        &tr_states[65], &tr_states[66], &tr_states[67], &tr_states[68], &tr_states[69],
                        &tr_states[70], &tr_states[71], &tr_states[72], &tr_states[73], &tr_states[74],
                        &tr_states[75], &tr_states[76], &tr_states[77], &tr_states[78], &tr_states[79],
                        &tr_states[80], &tr_states[81]
                }
        },
// 英国
        {
                "GB",
                5,
                {
                        &gb_states[0], &gb_states[1], &gb_states[2], &gb_states[3], &gb_states[4]
                }
        },
// 赞比亚
        {
                "ZM",
                1,
                {
                        &zm_states[0]
                }
        },
// 津巴布韦
        {
                "ZW",
                1,
                {
                        &zw_states[0]
                }
        },
// 阿塞拜疆
        {
                "AZ",
                1,
                {
                        &az_states[0]
                }
        },
// 毛里塔尼亚
        {
                "MR",
                1,
                {
                        &mr_states[0]
                }
        },
// 马里
        {
                "ML",
                1,
                {
                        &ml_states[0]
                }
        },
// 尼日尔
        {
                "NE",
                1,
                {
                        &ne_states[0]
                }
        },
// 乍得
        {
                "TD",
                1,
                {
                        &td_states[0]
                }
        },
// 苏丹
        {
                "SD",
                1,
                {
                        &sd_states[0]
                }
        },
// 厄立特里亚
        {
                "ER",
                1,
                {
                        &er_states[0]
                }
        },
// 吉布提
        {
                "DJ",
                1,
                {
                        &dj_states[0]
                }
        },
// 索马里
        {
                "SO",
                1,
                {
                        &so_states[0]
                }
        },
// 安道尔
        {
                "AD",
                1,
                {
                        &ad_states[0]
                }
        },
// 直布罗陀
        {
                "GI",
                1,
                {
                        &gi_states[0]
                }
        },
// 根西岛
        {
                "GG",
                1,
                {
                        &gg_states[0]
                }
        },
// 马恩岛
        {
                "IM",
                1,
                {
                        &im_states[0]
                }
        },
// 泽西岛
        {
                "JE",
                1,
                {
                        &je_states[0]
                }
        },
// 摩纳哥
        {
                "MC",
                1,
                {
                        &mc_states[0]
                }
        },
// 台湾地区
        {
                "TW",
                23,
                {
                        &tw_states[0], &tw_states[1], &tw_states[2], &tw_states[3], &tw_states[4],
                                                                                                   &tw_states[5], &tw_states[6], &tw_states[7], &tw_states[8], &tw_states[9],
                        &tw_states[10], &tw_states[11], &tw_states[12], &tw_states[13], &tw_states[14],
                        &tw_states[15], &tw_states[16], &tw_states[17], &tw_states[18], &tw_states[19],
                                                                                                       &tw_states[20], &tw_states[21], &tw_states[22]
                }
        },
// 韩国
        {
                "KR",
                17,
                {
                        &kr_states[0], &kr_states[1], &kr_states[2], &kr_states[3], &kr_states[4],
                                                                                                   &kr_states[5], &kr_states[6], &kr_states[7], &kr_states[8], &kr_states[9],
                        &kr_states[10], &kr_states[11], &kr_states[12], &kr_states[13], &kr_states[14],
                        &kr_states[15], &kr_states[16]
                }
        },
// 香港地区
        {
                "HK",
                1,
                {
                        &hk_states[0]
                }
        },
// 新加坡
        {
                "SG",
                1,
                {
                        &sg_states[0]
                }
        },
// 马来西亚
        {
                "MY",
                17,
                {
                        &my_states[0], &my_states[1], &my_states[2], &my_states[3], &my_states[4],
                                                                                                   &my_states[5], &my_states[6], &my_states[7], &my_states[8], &my_states[9],
                        &my_states[10], &my_states[11], &my_states[12], &my_states[13], &my_states[14],
                        &my_states[15], &my_states[16]
                }
        },
// 中国地区
        {
                "CN",
                32,
                {
                        &cn_states[0], &cn_states[1], &cn_states[2], &cn_states[3], &cn_states[4],
                                                                                                   &cn_states[5], &cn_states[6], &cn_states[7], &cn_states[8], &cn_states[9],
                        &cn_states[10], &cn_states[11], &cn_states[12], &cn_states[13], &cn_states[14],
                        &cn_states[15], &cn_states[16], &cn_states[17], &cn_states[18], &cn_states[19],
                                                                                                       &cn_states[20], &cn_states[21], &cn_states[22], &cn_states[23], &cn_states[24],
                                                                                                                                                                                   &cn_states[25], &cn_states[26], &cn_states[27], &cn_states[28], &cn_states[29],
                                                                                                                                                                                                                                                                   &cn_states[30], &cn_states[31]
                }
        },
// 阿联酋
        {
                "AE",
                8,
                {
                        &ae_states[0], &ae_states[1], &ae_states[2], &ae_states[3],
                                                                                    &ae_states[4], &ae_states[5], &ae_states[6], &ae_states[7]
                }
        },
// 印度
        {
                "IN",
                35,
                {
                        &in_states[0], &in_states[1], &in_states[2], &in_states[3], &in_states[4],
                                                                                                   &in_states[5], &in_states[6], &in_states[7], &in_states[8], &in_states[9],
                        &in_states[10], &in_states[11], &in_states[12], &in_states[13], &in_states[14],
                        &in_states[15], &in_states[16], &in_states[17], &in_states[18], &in_states[19],
                                                                                                       &in_states[20], &in_states[21], &in_states[22], &in_states[23], &in_states[24],
                                                                                                                                                                                   &in_states[25], &in_states[26], &in_states[27], &in_states[28], &in_states[29],
                                                                                                                                                                                                                                                                   &in_states[30], &in_states[31], &in_states[32], &in_states[33], &in_states[34]
                }
        },
// 沙特阿拉伯
        {
                "SA",
                14,
                {
                        &sa_states[0], &sa_states[1], &sa_states[2], &sa_states[3], &sa_states[4],
                                                                                                   &sa_states[5], &sa_states[6], &sa_states[7], &sa_states[8], &sa_states[9],
                        &sa_states[10], &sa_states[11], &sa_states[12], &sa_states[13]
                }
        },
// 圣马力诺
        {
                "SM",
                1,
                {
                        &sm_states[0]
                }
        },
// 梵蒂冈
        {
                "VA",
                1,
                {
                        &va_states[0]
                }
        },
// 百慕大
        {
                "BM",
                1,
                {
                        &bm_states[0]
                }
        },
// 数组结束标志（空元素）
        {
                "",
                0,
                {NULL}
        }
};

