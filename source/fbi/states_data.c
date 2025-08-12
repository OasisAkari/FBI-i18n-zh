#include "states_data.h"

#include "stddef.h"

// 日本地区
State jp_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Tokyo (02)"},
        {"03", "Hokkaido (03)"},
        {"04", "Aomori (04)"},
        {"05", "Iwate (05)"},
        {"06", "Miyagi (06)"},
        {"07", "Akita (07)"},
        {"08", "Yamagata (08)"},
        {"09", "Fukushima (09)"},
        {"0A", "Ibaraki (0A)"},
        {"0B", "Tochigi (0B)"},
        {"0C", "Gunma (0C)"},
        {"0D", "Saitama (0D)"},
        {"0E", "Chiba (0E)"},
        {"0F", "Kanagawa (0F)"},
        {"10", "Toyama (10)"},
        {"11", "Ishikawa (11)"},
        {"12", "Fukui (12)"},
        {"13", "Yamanashi (13)"},
        {"14", "Nagano (14)"},
        {"15", "Niigata (15)"},
        {"16", "Gifu (16)"},
        {"17", "Shizuoka (17)"},
        {"18", "Aichi (18)"},
        {"19", "Mie (19)"},
        {"1A", "Shiga (1A)"},
        {"1B", "Kyoto (1B)"},
        {"1C", "Osaka (1C)"},
        {"1D", "Hyogo (1D)"},
        {"1E", "Nara (1E)"},
        {"1F", "Wakayama (1F)"},
        {"20", "Tottori (20)"},
        {"21", "Shimane (21)"},
        {"22", "Okayama (22)"},
        {"23", "Hiroshima (23)"},
        {"24", "Yamaguchi (24)"},
        {"25", "Tokushima (25)"},
        {"26", "Kagawa (26)"},
        {"27", "Ehime (27)"},
        {"28", "Kochi (28)"},
        {"29", "Fukuoka (29)"},
        {"2A", "Saga (2A)"},
        {"2B", "Nagasaki (2B)"},
        {"2C", "Kumamoto (2C)"},
        {"2D", "Oita (2D)"},
        {"2E", "Miyazaki (2E)"},
        {"2F", "Kagoshima (2F)"},
        {"30", "Okinawa (30)"}
};

// 安圭拉地区
State ai_states[] = {
        {"01", "Anguilla (01)"}
};

// 安提瓜和巴布达地区
State ag_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Saint John (02)"},
        {"03", "Barbuda (03)"},
        {"04", "Saint George (04)"},
        {"05", "Saint Mary (05)"},
        {"06", "Saint Paul (06)"},
        {"07", "Saint Peter (07)"},
        {"08", "Saint Philip (08)"}
};

// 阿根廷地区
State ar_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Distrito Federal (02)"},
        {"03", "Buenos Aires (03)"},
        {"04", "Catamarca (04)"},
        {"05", "Chaco (05)"},
        {"06", "Chubut (06)"},
        {"07", "Córdoba (07)"},
        {"08", "Corrientes (08)"},
        {"09", "Entre Ríos (09)"},
        {"0A", "Formosa (0A)"},
        {"0B", "Jujuy (0B)"},
        {"0C", "La Pampa (0C)"},
        {"0D", "La Rioja (0D)"},
        {"0E", "Mendoza (0E)"},
        {"0F", "Misiones (0F)"},
        {"10", "Neuquén (10)"},
        {"11", "Río Negro (11)"},
        {"12", "Salta (12)"},
        {"13", "San Juan (13)"},
        {"14", "San Luis (14)"},
        {"15", "Santa Cruz (15)"},
        {"16", "Santa Fe (16)"},
        {"17", "Santiago del Estero (17)"},
        {"18", "Tierra del Fuego, Antártida e Islas del Atlántico Sur (18)"},
        {"19", "Tucumán (19)"}
};

// 阿鲁巴地区
State aw_states[] = {
        {"01", "Aruba (01)"}
};

// 巴哈马地区
State bs_states[] = {
        {"01", "Bahamas (01)"}
};

// 巴巴多斯地区
State bb_states[] = {
        {"01", "Barbados (01)"}
};

// 伯利兹地区
State bz_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Cayo (02)"},
        {"03", "Belize (03)"},
        {"04", "Corozal (04)"},
        {"05", "Orange Walk (05)"},
        {"06", "Stann Creek (06)"},
        {"07", "Toledo (07)"}
};

// 玻利维亚地区
State bo_states[] = {
        {"00", "Do not set (00)"},
        {"02", "La Paz (02)"},
        {"03", "Chuquisaca (03)"},
        {"04", "Cochabamba (04)"},
        {"05", "El Beni (05)"},
        {"06", "Oruro (06)"},
        {"07", "Pando (07)"},
        {"08", "Potosí (08)"},
        {"09", "Santa Cruz (09)"},
        {"0A", "Tarija (0A)"}
};

// 巴西地区
State br_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Distrito Federal (02)"},
        {"03", "Acre (03)"},
        {"04", "Alagoas (04)"},
        {"05", "Amapá (05)"},
        {"06", "Amazonas (06)"},
        {"07", "Bahia (07)"},
        {"08", "Ceará (08)"},
        {"09", "Espírito Santo (09)"},
        {"0A", "Mato Grosso do Sul (0A)"},
        {"0B", "Maranhão (0B)"},
        {"0C", "Mato Grosso (0C)"},
        {"0D", "Minas Gerais (0D)"},
        {"0E", "Pará (0E)"},
        {"0F", "Paraíba (0F)"},
        {"10", "Paraná (10)"},
        {"11", "Piauí (11)"},
        {"12", "Rio de Janeiro (12)"},
        {"13", "Rio Grande do Norte (13)"},
        {"14", "Rio Grande do Sul (14)"},
        {"15", "Rondônia (15)"},
        {"16", "Roraima (16)"},
        {"17", "Santa Catarina (17)"},
        {"18", "São Paulo (18)"},
        {"19", "Sergipe (19)"},
        {"1A", "Goiás (1A)"},
        {"1B", "Pernambuco (1B)"},
        {"1C", "Tocantins (1C)"}
};

// 英属维尔京群岛地区
State vg_states[] = {
        {"01", "British Virgin Islands (01)"}
};

// 加拿大地区
State ca_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Ontario (02)"},
        {"03", "Alberta (03)"},
        {"04", "British Columbia (04)"},
        {"05", "Manitoba (05)"},
        {"06", "New Brunswick (06)"},
        {"07", "Newfoundland and Labrador (07)"},
        {"08", "Nova Scotia (08)"},
        {"09", "Prince Edward Island (09)"},
        {"0A", "Quebec (0A)"},
        {"0B", "Saskatchewan (0B)"},
        {"0C", "Yukon (0C)"},
        {"0D", "Northwest Territories (0D)"},
        {"0E", "Nunavut (0E)"}
};

// 开曼群岛地区
State ky_states[] = {
        {"01", "Cayman Islands (01)"}
};

// 智利地区
State cl_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Región Metropolitana (02)"},
        {"03", "Valparaíso (03)"},
        {"04", "Aisén del General Carlos Ibáñez del Campo (04)"},
        {"05", "Antofagasta (05)"},
        {"06", "Araucanía (06)"},
        {"07", "Atacama (07)"},
        {"08", "Bío-Bío (08)"},
        {"09", "Coquimbo (09)"},
        {"0A", "Libertador General Bernardo O'Higgins (0A)"},
        {"0B", "Los Lagos (0B)"},
        {"0C", "Magallanes y Antártica Chilena (0C)"},
        {"0D", "Maule (0D)"},
        {"0E", "Tarapacá (0E)"}
};

// 哥伦比亚地区
State co_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Distrito Capital (02)"},
        {"03", "Cundinamarca (03)"},
        {"04", "Amazonas (04)"},
        {"05", "Antioquia (05)"},
        {"06", "Arauca (06)"},
        {"07", "Atlántico (07)"},
        {"08", "Bolívar (08)"},
        {"09", "Boyacá (09)"},
        {"0A", "Caldas (0A)"},
        {"0B", "Caquetá (0B)"},
        {"0C", "Cauca (0C)"},
        {"0D", "Cesar (0D)"},
        {"0E", "Chocó (0E)"},
        {"0F", "Córdoba (0F)"},
        {"10", "Guaviare (10)"},
        {"11", "Guainía (11)"},
        {"12", "Huila (12)"},
        {"13", "La Guajira (13)"},
        {"14", "Magdalena (14)"},
        {"15", "Meta (15)"},
        {"16", "Nariño (16)"},
        {"17", "Norte de Santander (17)"},
        {"18", "Putumayo (18)"},
        {"19", "Quindío (19)"},
        {"1A", "Risaralda (1A)"},
        {"1B", "Archipiélago de San Andrés, Providencia y Santa Catalina (1B)"},
        {"1C", "Santander (1C)"},
        {"1D", "Sucre (1D)"},
        {"1E", "Tolima (1E)"},
        {"1F", "Valle del Cauca (1F)"},
        {"20", "Vaupés (20)"},
        {"21", "Vichada (21)"},
        {"22", "Casanare (22)"}
};

// 哥斯达黎加地区
State cr_states[] = {
        {"00", "Do not set (00)"},
        {"02", "San José (02)"},
        {"03", "Alajuela (03)"},
        {"04", "Cartago (04)"},
        {"05", "Guanacaste (05)"},
        {"06", "Heredia (06)"},
        {"07", "Limón (07)"},
        {"08", "Puntarenas (08)"}
};

// 多米尼克地区
State dm_states[] = {
        {"01", "Dominica (01)"}
};

// 多米尼加共和国地区
State do_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Distrito Nacional (02)"},
        {"03", "Azua (03)"},
        {"04", "Baoruco (04)"},
        {"05", "Barahona (05)"},
        {"06", "Dajabón (06)"},
        {"07", "Duarte (07)"},
        {"08", "Espaillat (08)"},
        {"09", "Independencia (09)"},
        {"0A", "La Altagracia (0A)"},
        {"0B", "Elías Piña (0B)"},
        {"0C", "La Romana (0C)"},
        {"0D", "María Trinidad Sánchez (0D)"},
        {"0E", "Monte Cristi (0E)"},
        {"0F", "Pedernales (0F)"},
        {"10", "Peravia (10)"},
        {"11", "Puerto Plata (11)"},
        {"12", "Salcedo (12)"},
        {"13", "Samaná (13)"},
        {"14", "Sánchez Ramírez (14)"},
        {"15", "San Juan (15)"},
        {"16", "San Pedro de Macorís (16)"},
        {"17", "Santiago (17)"},
        {"18", "Santiago Rodríguez (18)"},
        {"19", "Valverde (19)"},
        {"1A", "El Seíbo (1A)"},
        {"1B", "Hato Mayor (1B)"},
        {"1C", "La Vega (1C)"},
        {"1D", "Monseñor Nouel (1D)"},
        {"1E", "Monte Plata (1E)"},
        {"1F", "San Cristóbal (1F)"}
};

// 厄瓜多尔地区
State ec_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Pichincha (02)"},
        {"03", "Galápagos (03)"},
        {"04", "Azuay (04)"},
        {"05", "Bolívar (05)"},
        {"06", "Cañar (06)"},
        {"07", "Carchi (07)"},
        {"08", "Chimborazo (08)"},
        {"09", "Cotopaxi (09)"},
        {"0A", "El Oro (0A)"},
        {"0B", "Esmeraldas (0B)"},
        {"0C", "Guayas (0C)"},
        {"0D", "Imbabura (0D)"},
        {"0E", "Loja (0E)"},
        {"0F", "Los Ríos (0F)"},
        {"10", "Manabí (10)"},
        {"11", "Morona-Santiago (11)"},
        {"12", "Pastaza (12)"},
        {"13", "Tungurahua (13)"},
        {"14", "Zamora-Chinchipe (14)"},
        {"15", "Sucumbios (15)"},
        {"16", "Napo (16)"},
        {"17", "Orellana (17)"},
        {"18", "Santa Elena (18)"},
        {"19", "Santo Domingo de los Tsáchilas (19)"}
};

// 萨尔瓦多地区
State sv_states[] = {
        {"00", "Do not set (00)"},
        {"02", "San Salvador (02)"},
        {"03", "Ahuachapán (03)"},
        {"04", "Cabañas (04)"},
        {"05", "Chalatenango (05)"},
        {"06", "Cuscatlán (06)"},
        {"07", "La Libertad (07)"},
        {"08", "La Paz (08)"},
        {"09", "La Unión (09)"},
        {"0A", "Morazán (0A)"},
        {"0B", "San Miguel (0B)"},
        {"0C", "Santa Ana (0C)"},
        {"0D", "San Vicente (0D)"},
        {"0E", "Sonsonate (0E)"},
        {"0F", "Usulután (0F)"}
};

// 法属圭亚那地区
State gf_states[] = {
        {"01", "French Guiana (01)"}
};

// 格林纳达地区
State gd_states[] = {
        {"01", "Grenada (01)"}
};

// 瓜德罗普地区
State gp_states[] = {
        {"01", "Guadeloupe (01)"}
};

// 危地马拉地区
State gt_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Guatemala (02)"},
        {"03", "Alta Verapaz (03)"},
        {"04", "Baja Verapaz (04)"},
        {"05", "Chimaltenango (05)"},
        {"06", "Chiquimula (06)"},
        {"07", "El Progreso (07)"},
        {"08", "Escuintla (08)"},
        {"09", "Huehuetenango (09)"},
        {"0A", "Izabal (0A)"},
        {"0B", "Jalapa (0B)"},
        {"0C", "Jutiapa (0C)"},
        {"0D", "Petén (0D)"},
        {"0E", "Quetzaltenango (0E)"},
        {"0F", "Quiché (0F)"},
        {"10", "Retalhuleu (10)"},
        {"11", "Sacatepéquez (11)"},
        {"12", "San Marcos (12)"},
        {"13", "Santa Rosa (13)"},
        {"14", "Sololá (14)"},
        {"15", "Suchitepéquez (15)"},
        {"16", "Totonicapán (16)"},
        {"17", "Zacapa (17)"}
};

// 圭亚那地区
State gy_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Demerara-Mahaica (02)"},
        {"03", "Barima-Waini (03)"},
        {"04", "Cuyuni-Mazaruni (04)"},
        {"05", "East Berbice-Corentyne (05)"},
        {"06", "Essequibo Islands-West Demerara (06)"},
        {"07", "Mahaica-Berbice (07)"},
        {"08", "Pomeroon-Supenaam (08)"},
        {"09", "Potaro-Siparuni (09)"},
        {"0A", "Upper Demerara-Berbice (0A)"},
        {"0B", "Upper Takutu-Upper Essequibo (0B)"}
};

// 海地地区
State ht_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Ouest (02)"},
        {"03", "Nord-Ouest (03)"},
        {"04", "Artibonite (04)"},
        {"05", "Centre (05)"},
        {"06", "Grand'Anse (06)"},
        {"07", "Nord (07)"},
        {"08", "Nord-Est (08)"},
        {"09", "Sud (09)"},
        {"0A", "Sud-Est (0A)"},
        {"0B", "Nippes (0B)"}
};

// 洪都拉斯地区
State hn_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Francisco Morazán (02)"},
        {"03", "Atlántida (03)"},
        {"04", "Choluteca (04)"},
        {"05", "Colón (05)"},
        {"06", "Comayagua (06)"},
        {"07", "Copán (07)"},
        {"08", "Cortés (08)"},
        {"09", "El Paraíso (09)"},
        {"0A", "Gracias a Dios (0A)"},
        {"0B", "Intibucá (0B)"},
        {"0C", "Islas de la Bahía (0C)"},
        {"0D", "La Paz (0D)"},
        {"0E", "Lempira (0E)"},
        {"0F", "Ocotepeque (0F)"},
        {"10", "Olancho (10)"},
        {"11", "Santa Bárbara (11)"},
        {"12", "Valle (12)"},
        {"13", "Yoro (13)"}
};

// 牙买加地区
State jm_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Saint Thomas (02)"},
        {"03", "Clarendon (03)"},
        {"04", "Hanover (04)"},
        {"05", "Manchester (05)"},
        {"06", "Portland (06)"},
        {"07", "Saint Andrew (07)"},
        {"08", "Saint Ann (08)"},
        {"09", "Saint Catherine (09)"},
        {"0A", "Saint Elizabeth (0A)"},
        {"0B", "Saint James (0B)"},
        {"0C", "Saint Mary (0C)"},
        {"0D", "Trelawny (0D)"},
        {"0E", "Westmoreland (0E)"},
        {"0F", "Kingston (0F)"}
};

// 马提尼克地区
State mq_states[] = {
        {"01", "Martinique (01)"}
};

// 墨西哥地区
State mx_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Distrito Federal (02)"},
        {"03", "Aguascalientes (03)"},
        {"04", "Baja California (04)"},
        {"05", "Baja California Sur (05)"},
        {"06", "Campeche (06)"},
        {"07", "Chiapas (07)"},
        {"08", "Chihuahua (08)"},
        {"09", "Coahuila de Zaragoza (09)"},
        {"0A", "Colima (0A)"},
        {"0B", "Durango (0B)"},
        {"0C", "Guanajuato (0C)"},
        {"0D", "Guerrero (0D)"},
        {"0E", "Hidalgo (0E)"},
        {"0F", "Jalisco (0F)"},
        {"10", "México (10)"},
        {"11", "Michoacán de Ocampo (11)"},
        {"12", "Morelos (12)"},
        {"13", "Nayarit (13)"},
        {"14", "Nuevo León (14)"},
        {"15", "Oaxaca (15)"},
        {"16", "Puebla (16)"},
        {"17", "Querétaro de Arteaga (17)"},
        {"18", "Quintana Roo (18)"},
        {"19", "San Luis Potosí (19)"},
        {"1A", "Sinaloa (1A)"},
        {"1B", "Sonora (1B)"},
        {"1C", "Tabasco (1C)"},
        {"1D", "Tamaulipas (1D)"},
        {"1E", "Tlaxcala (1E)"},
        {"1F", "Veracruz-Llave (1F)"},
        {"20", "Yucatán (20)"},
        {"21", "Zacatecas (21)"}
};

// 蒙特塞拉特地区
State ms_states[] = {
        {"01", "Montserrat (01)"}
};

// 荷属安的列斯地区
State an_states[] = {
        {"01", "Netherlands Antilles (01)"}
};

// 尼加拉瓜地区
State ni_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Managua (02)"},
        {"03", "Boaco (03)"},
        {"04", "Carazo (04)"},
        {"05", "Chinandega (05)"},
        {"06", "Chontales (06)"},
        {"07", "Estelí (07)"},
        {"08", "Granada (08)"},
        {"09", "Jinotega (09)"},
        {"0A", "León (0A)"},
        {"0B", "Madriz (0B)"},
        {"0C", "Masaya (0C)"},
        {"0D", "Matagalpa (0D)"},
        {"0E", "Nueva Segovia (0E)"},
        {"0F", "Río San Juan (0F)"},
        {"10", "Rivas (10)"},
        {"11", "Atlántico Norte (11)"},
        {"12", "Atlántico Sur (12)"}
};

// 巴拿马地区
State pa_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Panamá (02)"},
        {"03", "Bocas del Toro (03)"},
        {"04", "Chiriquí (04)"},
        {"05", "Coclé (05)"},
        {"06", "Colón (06)"},
        {"07", "Darién (07)"},
        {"08", "Herrera (08)"},
        {"09", "Los Santos (09)"},
        {"0A", "Kuna Yala (0A)"},
        {"0B", "Veraguas (0B)"}
};

// 巴拉圭地区
State py_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Central (02)"},
        {"03", "Alto Paraná (03)"},
        {"04", "Amambay (04)"},
        {"05", "Caaguazú (05)"},
        {"06", "Caazapá (06)"},
        {"07", "Concepción (07)"},
        {"08", "Cordillera (08)"},
        {"09", "Guairá (09)"},
        {"0A", "Itapúa (0A)"},
        {"0B", "Misiones (0B)"},
        {"0C", "Ñeembucú (0C)"},
        {"0D", "Paraguarí (0D)"},
        {"0E", "Presidente Hayes (0E)"},
        {"0F", "San Pedro (0F)"},
        {"10", "Canindeyú (10)"},
        {"11", "Asunción (11)"},
        {"12", "Alto Paraguay (12)"},
        {"13", "Boquerón (13)"}
};

// 秘鲁地区
State pe_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Lima (02)"},
        {"03", "Amazonas (03)"},
        {"04", "Ancash (04)"},
        {"05", "Apurímac (05)"},
        {"06", "Arequipa (06)"},
        {"07", "Ayacucho (07)"},
        {"08", "Cajamarca (08)"},
        {"09", "Callao (09)"},
        {"0A", "Cuzco (0A)"},
        {"0B", "Huancavelica (0B)"},
        {"0C", "Huánuco (0C)"},
        {"0D", "Ica (0D)"},
        {"0E", "Junín (0E)"},
        {"0F", "La Libertad (0F)"},
        {"10", "Lambayeque (10)"},
        {"11", "Loreto (11)"},
        {"12", "Madre de Dios (12)"},
        {"13", "Moquegua (13)"},
        {"14", "Pasco (14)"},
        {"15", "Piura (15)"},
        {"16", "Puno (16)"},
        {"17", "San Martín (17)"},
        {"18", "Tacna (18)"},
        {"19", "Tumbes (19)"},
        {"1A", "Ucayali (1A)"}
};

// 圣基茨和尼维斯地区
State kn_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Saint George Basseterre (02)"},
        {"03", "Christ Church Nichola Town (03)"},
        {"04", "Saint Anne Sandy Point (04)"},
        {"05", "Saint George Gingerland (05)"},
        {"06", "Saint James Windward (06)"},
        {"07", "Saint John Capesterre (07)"},
        {"08", "Saint John Figtree (08)"},
        {"09", "Saint Mary Cayon (09)"},
        {"0A", "Saint Paul Capesterre (0A)"},
        {"0B", "Saint Paul Charlestown (0B)"},
        {"0C", "Saint Peter Basseterre (0C)"},
        {"0D", "Saint Thomas Lowland (0D)"},
        {"0E", "Saint Thomas Middle Island (0E)"},
        {"0F", "Trinity Palmetto Point (0F)"}
};

// 圣卢西亚地区
State lc_states[] = {
        {"01", "St. Lucia (01)"}
};

// 圣文森特和格林纳丁斯地区
State vc_states[] = {
        {"01", "St. Vincent and the Grenadines (01)"}
};

// 苏里南地区
State sr_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Paramaribo (02)"},
        {"03", "Brokopondo (03)"},
        {"04", "Commewijne (04)"},
        {"05", "Coronie (05)"},
        {"06", "Marowijne (06)"},
        {"07", "Nickerie (07)"},
        {"08", "Para (08)"},
        {"09", "Saramacca (09)"},
        {"0A", "Sipaliwini (0A)"},
        {"0B", "Wanica (0B)"}
};

// 特立尼达和多巴哥地区
State tt_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Port-of-Spain (02)"},
        {"03", "Arima (03)"},
        {"04", "Caroni (04)"},
        {"05", "Mayaro (05)"},
        {"06", "Nariva (06)"},
        {"07", "Saint Andrew (07)"},
        {"08", "Saint David (08)"},
        {"09", "Saint George (09)"},
        {"0A", "Saint Patrick (0A)"},
        {"0B", "San Fernando (0B)"},
        {"0C", "Tobago (0C)"},
        {"0D", "Victoria (0D)"},
        {"0E", "Point Fortin (0E)"}
};

// 特克斯和凯科斯群岛地区
State tc_states[] = {
        {"01", "Turks and Caicos Islands (01)"}
};

// 美国地区
State us_states[] = {
        {"00", "Do not set (00)"},
        {"02", "District of Columbia (02)"},
        {"03", "Alaska (03)"},
        {"04", "Alabama (04)"},
        {"05", "Arkansas (05)"},
        {"06", "Arizona (06)"},
        {"07", "California (07)"},
        {"08", "Colorado (08)"},
        {"09", "Connecticut (09)"},
        {"0A", "Delaware (0A)"},
        {"0B", "Florida (0B)"},
        {"0C", "Georgia (0C)"},
        {"0D", "Hawaii (0D)"},
        {"0E", "Iowa (0E)"},
        {"0F", "Idaho (0F)"},
        {"10", "Illinois (10)"},
        {"11", "Indiana (11)"},
        {"12", "Kansas (12)"},
        {"13", "Kentucky (13)"},
        {"14", "Louisiana (14)"},
        {"15", "Massachusetts (15)"},
        {"16", "Maryland (16)"},
        {"17", "Maine (17)"},
        {"18", "Michigan (18)"},
        {"19", "Minnesota (19)"},
        {"1A", "Missouri (1A)"},
        {"1B", "Mississippi (1B)"},
        {"1C", "Montana (1C)"},
        {"1D", "North Carolina (1D)"},
        {"1E", "North Dakota (1E)"},
        {"1F", "Nebraska (1F)"},
        {"20", "New Hampshire (20)"},
        {"21", "New Jersey (21)"},
        {"22", "New Mexico (22)"},
        {"23", "Nevada (23)"},
        {"24", "New York (24)"},
        {"25", "Ohio (25)"},
        {"26", "Oklahoma (26)"},
        {"27", "Oregon (27)"},
        {"28", "Pennsylvania (28)"},
        {"29", "Rhode Island (29)"},
        {"2A", "South Carolina (2A)"},
        {"2B", "South Dakota (2B)"},
        {"2C", "Tennessee (2C)"},
        {"2D", "Texas (2D)"},
        {"2E", "Utah (2E)"},
        {"2F", "Virginia (2F)"},
        {"30", "Vermont (30)"},
        {"31", "Washington (31)"},
        {"32", "Wisconsin (32)"},
        {"33", "West Virginia (33)"},
        {"34", "Wyoming (34)"},
        {"35", "Puerto Rico (35)"}
};

// 乌拉圭地区
State uy_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Montevideo (02)"},
        {"03", "Artigas (03)"},
        {"04", "Canelones (04)"},
        {"05", "Cerro Largo (05)"},
        {"06", "Colonia (06)"},
        {"07", "Durazno (07)"},
        {"08", "Flores (08)"},
        {"09", "Florida (09)"},
        {"0A", "Lavalleja (0A)"},
        {"0B", "Maldonado (0B)"},
        {"0C", "Paysandú (0C)"},
        {"0D", "Río Negro (0D)"},
        {"0E", "Rivera (0E)"},
        {"0F", "Rocha (0F)"},
        {"10", "Salto (10)"},
        {"11", "San José (11)"},
        {"12", "Soriano (12)"},
        {"13", "Tacuarembó (13)"},
        {"14", "Treinta y Tres (14)"}
};

// 美属维尔京群岛地区
State vi_states[] = {
        {"01", "US Virgin Islands (01)"}
};

// 委内瑞拉地区
State ve_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Distrito Federal (02)"},
        {"03", "Amazonas (03)"},
        {"04", "Anzoátegui (04)"},
        {"05", "Apure (05)"},
        {"06", "Aragua (06)"},
        {"07", "Barinas (07)"},
        {"08", "Bolívar (08)"},
        {"09", "Carabobo (09)"},
        {"0A", "Cojedes (0A)"},
        {"0B", "Delta Amacuro (0B)"},
        {"0C", "Falcón (0C)"},
        {"0D", "Guárico (0D)"},
        {"0E", "Lara (0E)"},
        {"0F", "Mérida (0F)"},
        {"10", "Miranda (10)"},
        {"11", "Monagas (11)"},
        {"12", "Nueva Esparta (12)"},
        {"13", "Portuguesa (13)"},
        {"14", "Sucre (14)"},
        {"15", "Táchira (15)"},
        {"16", "Trujillo (16)"},
        {"17", "Yaracuy (17)"},
        {"18", "Zulia (18)"},
        {"19", "Dependencias Federales (19)"},
        {"1A", "Vargas (1A)"}
};

// 阿尔巴尼亚地区
State al_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Tirana (02)"},
        {"03", "Berat (03)"},
        {"04", "Dibër (04)"},
        {"05", "Durrës (05)"},
        {"06", "Elbasan (06)"},
        {"07", "Fier (07)"},
        {"08", "Gjirokastër (08)"},
        {"09", "Korçë (09)"},
        {"0A", "Kukës (0A)"},
        {"0B", "Lezhë (0B)"},
        {"0C", "Shkodër (0C)"},
        {"0D", "Vlorë (0D)"}
};

// 澳大利亚地区
State au_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Australian Capital Territory (02)"},
        {"03", "New South Wales (03)"},
        {"04", "Northern Territory (04)"},
        {"05", "Queensland (05)"},
        {"06", "South Australia (06)"},
        {"07", "Tasmania (07)"},
        {"08", "Victoria (08)"},
        {"09", "Western Australia (09)"}
};

// 奥地利地区
State at_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Vienna (02)"},
        {"03", "Burgenland (03)"},
        {"04", "Carinthia (04)"},
        {"05", "Lower Austria (05)"},
        {"06", "Upper Austria (06)"},
        {"07", "Salzburg (07)"},
        {"08", "Styria (08)"},
        {"09", "Tyrol (09)"},
        {"0A", "Vorarlberg (0A)"}
};

// 比利时地区
State be_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Brussels Region (02)"},
        {"03", "Flanders (03)"},
        {"04", "Wallonia (04)"}
};

// 波斯尼亚和黑塞哥维那地区
State ba_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Federation of Bosnia and Herzegovina (02)"},
        {"03", "Republika Srpska (03)"},
        {"04", "Brčko District (04)"}
};

// 博茨瓦纳地区
State bw_states[] = {
        {"01", "Botswana (01)"}
};

// 保加利亚地区
State bg_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Sofia City (02)"},
        {"03", "Sofia Province (03)"},
        {"04", "Blagoevgrad (04)"},
        {"05", "Pleven (05)"},
        {"06", "Vidin (06)"},
        {"07", "Varna (07)"},
        {"08", "Burgas (08)"},
        {"09", "Dobrich (09)"},
        {"0A", "Gabrovo (0A)"},
        {"0B", "Haskovo (0B)"},
        {"0C", "Yambol (0C)"},
        {"0D", "Kardzhali (0D)"},
        {"0E", "Kyustendil (0E)"},
        {"0F", "Lovech (0F)"},
        {"10", "Montana (10)"},
        {"11", "Pazardzhik (11)"},
        {"12", "Pernik (12)"},
        {"13", "Plovdiv (13)"},
        {"14", "Razgrad (14)"},
        {"15", "Ruse (15)"},
        {"16", "Silistra (16)"},
        {"17", "Sliven (17)"},
        {"18", "Smolyan (18)"},
        {"19", "Stara Zagora (19)"},
        {"1A", "Shumen (1A)"},
        {"1B", "Targovishte (1B)"},
        {"1C", "Veliko Tarnovo (1C)"},
        {"1D", "Vratsa (1D)"}
};

// 克罗地亚地区
State hr_states[] = {
        {"00", "Do not set (00)"},
        {"06", "Zagreb (06)"},
        {"07", "Bjelovar-Bilogora County (07)"},
        {"08", "Brod-Posavina County (08)"},
        {"09", "Dubrovnik-Neretva County (09)"},
        {"0A", "Istria County (0A)"},
        {"0B", "Karlovac County (0B)"},
        {"0C", "Koprivnica-Križevci County (0C)"},
        {"0D", "Krapina-Zagorje County (0D)"},
        {"0E", "Lika-Senj County (0E)"},
        {"0F", "Međimurje County (0F)"},
        {"10", "Osijek-Baranja County (10)"},
        {"11", "Požega-Slavonia County (11)"},
        {"12", "Primorje-Gorski Kotar County (12)"},
        {"13", "Sisak-Moslavina County (13)"},
        {"14", "Split-Dalmatia County (14)"},
        {"15", "Šibenik-Knin County (15)"},
        {"16", "Varaždin County (16)"},
        {"17", "Virovitica-Podravina County (17)"},
        {"18", "Vukovar-Syrmia County (18)"},
        {"19", "Zadar County (19)"},
        {"1A", "Zagreb County (1A)"}
};

// 塞浦路斯地区
State cy_states[] = {
        {"01", "Cyprus (01)"}
};

// 捷克共和国地区
State cz_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Prague (02)"},
        {"03", "Central Bohemian Region (03)"},
        {"04", "South Bohemian Region (04)"},
        {"05", "Plzeň Region (05)"},
        {"06", "Karlovy Vary Region (06)"},
        {"07", "Ústí nad Labem Region (07)"},
        {"08", "Liberec Region (08)"},
        {"09", "Hradec Králové Region (09)"},
        {"0A", "Pardubice Region (0A)"},
        {"0B", "Olomouc Region (0B)"},
        {"0C", "Moravian-Silesian Region (0C)"},
        {"0D", "South Moravian Region (0D)"},
        {"0E", "Zlín Region (0E)"},
        {"0F", "Vysočina Region (0F)"}
};

// 丹麦地区
State dk_states[] = {
        {"00", "Do not set (00)"},
        {"12", "Greenland (12)"},
        {"13", "Capital Region of Denmark (13)"},
        {"14", "Central Denmark Region (14)"},
        {"15", "North Denmark Region (15)"},
        {"16", "Region Zealand (16)"},
        {"17", "Region of Southern Denmark (17)"},
        {"18", "Faroe Islands (18)"}
};

// 爱沙尼亚地区
State ee_states[] = {
        {"01", "Estonia (01)"}
};

// 芬兰地区
State fi_states[] = {
        {"00", "Do not set (00)"},
        {"08", "Uusimaa / Nyland (08)"},
        {"09", "Lappi / Lapland (09)"},
        {"0A", "Pohjois-Pohjanmaa / Norra Österbotten (0A)"},
        {"0B", "Kainuu / Kajanaland (0B)"},
        {"0C", "Pohjois-Karjala / Norra Karelen (0C)"},
        {"0D", "Pohjois-Savo / Norra Savolax (0D)"},
        {"0E", "Etelä-Savo / Södra Savolax (0E)"},
        {"0F", "Etelä-Pohjanmaa / Södra Österbotten (0F)"},
        {"10", "Pohjanmaa / Österbotten (10)"},
        {"11", "Pirkanmaa / Birkaland (11)"},
        {"12", "Satakunta / Satakunda (12)"},
        {"13", "Keski-Pohjanmaa / Mellersta Österbotten (13)"},
        {"14", "Keski-Suomi / Mellersta Finland (14)"},
        {"15", "Varsinais-Suomi / Egentliga Finland (15)"},
        {"16", "Etelä-Karjala / Södra Karelen (16)"},
        {"17", "Päijät-Häme / Päijänne Tavastland (17)"},
        {"18", "Kanta-Häme / Egentliga Tavastland (18)"},
        {"19", "Itä-Uusimaa / Östra Nyland (19)"},
        {"1A", "Kymenlaakso / Kymmenedalen (1A)"},
        {"1B", "Ahvenanmaa / Åland (1B)"}
};

// 法国地区
State fr_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Île-de-France (02)"},
        {"03", "Alsace (03)"},
        {"04", "Aquitaine (04)"},
        {"05", "Auvergne (05)"},
        {"06", "Lower Normandy (06)"},
        {"07", "Burgundy (07)"},
        {"08", "Brittany (08)"},
        {"09", "Centre (09)"},
        {"0A", "Champagne-Ardenne (0A)"},
        {"0B", "Corsica (0B)"},
        {"0C", "Franche-Comté (0C)"},
        {"0D", "Upper Normandy (0D)"},
        {"0E", "Languedoc-Roussillon (0E)"},
        {"0F", "Limousin (0F)"},
        {"10", "Lorraine (10)"},
        {"11", "Midi-Pyrénées (11)"},
        {"12", "Nord-Pas-de-Calais (12)"},
        {"13", "Pays de la Loire (13)"},
        {"14", "Picardy (14)"},
        {"15", "Poitou-Charentes (15)"},
        {"16", "Provence-Alpes-Côte d'Azur (16)"},
        {"17", "Rhône-Alpes (17)"},
        {"18", "Guadeloupe (18)"},
        {"19", "Martinique (19)"},
        {"1A", "French Guiana (1A)"},
        {"1B", "Réunion (1B)"}
};

// 德国地区
State de_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Berlin (02)"},
        {"03", "Hesse (03)"},
        {"04", "Baden-Württemberg (04)"},
        {"05", "Bavaria (05)"},
        {"06", "Brandenburg (06)"},
        {"07", "Bremen (07)"},
        {"08", "Hamburg (08)"},
        {"09", "Mecklenburg-Vorpommern (09)"},
        {"0A", "Lower Saxony (0A)"},
        {"0B", "North Rhine-Westphalia (0B)"},
        {"0C", "Rhineland-Palatinate (0C)"},
        {"0D", "Saarland (0D)"},
        {"0E", "Saxony (0E)"},
        {"0F", "Saxony-Anhalt (0F)"},
        {"10", "Schleswig-Holstein (10)"},
        {"11", "Thuringia (11)"}
};

// 希腊地区
State gr_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Attica (02)"},
        {"03", "Central Greece (03)"},
        {"04", "Central Macedonia (04)"},
        {"05", "Crete (05)"},
        {"06", "East Macedonia and Thrace (06)"},
        {"07", "Epirus (07)"},
        {"08", "Ionian Islands (08)"},
        {"09", "North Aegean (09)"},
        {"0A", "Peloponnese (0A)"},
        {"0B", "South Aegean (0B)"},
        {"0C", "Thessaly (0C)"},
        {"0D", "West Greece (0D)"},
        {"0E", "West Macedonia (0E)"}
};

// 匈牙利地区
State hu_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Budapest (02)"},
        {"03", "Bács-Kiskun County (03)"},
        {"04", "Baranya County (04)"},
        {"05", "Békés County (05)"},
        {"06", "Borsod-Abaúj-Zemplén County (06)"},
        {"07", "Csongrád County (07)"},
        {"08", "Fejér County (08)"},
        {"09", "Győr-Moson-Sopron County (09)"},
        {"0A", "Hajdú-Bihar County (0A)"},
        {"0B", "Heves County (0B)"},
        {"0C", "Jász-Nagykun-Szolnok County (0C)"},
        {"0D", "Komárom-Esztergom County (0D)"},
        {"0E", "Nógrád County (0E)"},
        {"0F", "Pest County (0F)"},
        {"10", "Somogy County (10)"},
        {"11", "Szabolcs-Szatmár-Bereg County (11)"},
        {"12", "Tolna County (12)"},
        {"13", "Vas County (13)"},
        {"14", "Veszprém County (14)"},
        {"15", "Zala County (15)"}
};

// 冰岛地区
State is_states[] = {
        {"01", "Iceland (01)"}
};

// 爱尔兰地区
State ie_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Dublin (02)"},
        {"0A", "County Carlow (0A)"},
        {"0B", "County Cavan (0B)"},
        {"0C", "County Clare (0C)"},
        {"0D", "County Cork (0D)"},
        {"0E", "County Donegal (0E)"},
        {"0F", "County Galway (0F)"},
        {"10", "County Kerry (10)"},
        {"11", "County Kildare (11)"},
        {"12", "County Kilkenny (12)"},
        {"13", "County Laois (13)"},
        {"14", "County Leitrim (14)"},
        {"15", "County Limerick (15)"},
        {"16", "County Longford (16)"},
        {"17", "County Louth (17)"},
        {"18", "County Mayo (18)"},
        {"19", "County Meath (19)"},
        {"1A", "County Monaghan (1A)"},
        {"1B", "County Offaly (1B)"},
        {"1C", "County Roscommon (1C)"},
        {"1D", "County Sligo (1D)"},
        {"1E", "County Tipperary (1E)"},
        {"1F", "County Waterford (1F)"},
        {"20", "County Westmeath (20)"},
        {"21", "County Wexford (21)"},
        {"22", "County Wicklow (22)"}
};

// 意大利地区
State it_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Lazio (02)"},
        {"03", "Aosta Valley (03)"},
        {"04", "Piedmont (04)"},
        {"05", "Liguria (05)"},
        {"06", "Lombardy (06)"},
        {"07", "Trentino-Alto Adige (07)"},
        {"08", "Veneto (08)"},
        {"09", "Friuli Venezia Giulia (09)"},
        {"0A", "Emilia-Romagna (0A)"},
        {"0B", "Tuscany (0B)"},
        {"0C", "Umbria (0C)"},
        {"0D", "Marche (0D)"},
        {"0E", "Abruzzo (0E)"},
        {"0F", "Molise (0F)"},
        {"10", "Campania (10)"},
        {"11", "Apulia (11)"},
        {"12", "Basilicata (12)"},
        {"13", "Calabria (13)"},
        {"14", "Sicily (14)"},
        {"15", "Sardinia (15)"}
};

// 拉脱维亚地区
State lv_states[] = {
        {"01", "Latvia (01)"}
};

// 莱索托地区
State ls_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Maseru (02)"},
        {"03", "Berea (03)"},
        {"04", "Butha-Buthe (04)"},
        {"05", "Leribe (05)"},
        {"06", "Mafeteng (06)"},
        {"07", "Mohale's Hoek (07)"},
        {"08", "Mokhotlong (08)"},
        {"09", "Qacha's Nek (09)"},
        {"0A", "Quthing (0A)"},
        {"0B", "Thaba-Tseka (0B)"}
};

// 列支敦士登地区
State li_states[] = {
        {"01", "Liechtenstein (01)"}
};

// 立陶宛地区
State lt_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Vilnius (02)"},
        {"03", "Alytus (03)"},
        {"04", "Kaunas (04)"},
        {"05", "Klaipėda (05)"},
        {"06", "Marijampolė (06)"},
        {"07", "Panevėžys (07)"},
        {"08", "Šiauliai (08)"},
        {"09", "Taurage (09)"},
        {"0A", "Telšiai (0A)"},
        {"0B", "Utena (0B)"}
};

// 卢森堡地区
State lu_states[] = {
        {"01", "Luxembourg (01)"}
};

// 马其顿地区
State mk_states[] = {
        {"01", "Macedonia (Republic of) (01)"}
};

// 马耳他地区
State mt_states[] = {
        {"01", "Malta (01)"}
};

// 黑山地区
State me_states[] = {
        {"01", "Montenegro (01)"}
};

// 莫桑比克地区
State mz_states[] = {
        {"01", "Mozambique (01)"}
};

// 纳米比亚地区
State na_states[] = {
        {"01", "Namibia (01)"}
};

// 荷兰地区
State nl_states[] = {
        {"00", "Do not set (00)"},
        {"02", "North Holland (02)"},
        {"03", "Drenthe (03)"},
        {"04", "Flevoland (04)"},
        {"05", "Friesland (05)"},
        {"06", "Gelderland (06)"},
        {"07", "Groningen (07)"},
        {"08", "Limburg (08)"},
        {"09", "North Brabant (09)"},
        {"0A", "Overijssel (0A)"},
        {"0B", "South Holland (0B)"},
        {"0C", "Utrecht (0C)"},
        {"0D", "Zeeland (0D)"}
};

// 新西兰地区
State nz_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Wellington (02)"},
        {"03", "Auckland (03)"},
        {"04", "Bay of Plenty (04)"},
        {"05", "Canterbury (05)"},
        {"06", "Otago (06)"},
        {"07", "Hawke's Bay (07)"},
        {"08", "Manawatu-Wanganui (08)"},
        {"09", "Nelson (09)"},
        {"0A", "Northland (0A)"},
        {"0C", "Southland (0C)"},
        {"0D", "Taranaki (0D)"},
        {"0E", "Waikato (0E)"},
        {"0F", "Gisborne (0F)"},
        {"10", "West Coast (10)"},
        {"11", "Marlborough (11)"},
        {"12", "Tasman (12)"}
};

// 挪威地区
State no_states[] = {
        {"00", "Do not set (00)"},
        {"07", "Oslo (07)"},
        {"08", "Akershus (08)"},
        {"09", "Aust-Agder (09)"},
        {"0A", "Buskerud (0A)"},
        {"0B", "Finnmark (0B)"},
        {"0C", "Hedmark (0C)"},
        {"0D", "Hordaland (0D)"},
        {"0E", "Møre og Romsdal (0E)"},
        {"0F", "Nordland (0F)"},
        {"10", "Nord-Trøndelag (10)"},
        {"10", "Nord-Trøndelag (10)"},
        {"11", "Oppland (11)"},
        {"12", "Rogaland (12)"},
        {"13", "Sogn og Fjordane (13)"},
        {"14", "Sør-Trøndelag (14)"},
        {"15", "Telemark (15)"},
        {"16", "Troms (16)"},
        {"17", "Vest-Agder (17)"},
        {"18", "Vestfold (18)"},
        {"19", "Østfold (19)"},
        {"1A", "Svalbard (1A)"}
};

// 波兰地区
State pl_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Masovia (02)"},
        {"03", "Lower Silesia (03)"},
        {"04", "Kuyavian-Pomeranian Voivodeship (04)"},
        {"05", "Lodz (05)"},
        {"06", "Lublin (06)"},
        {"07", "Lubusz (07)"},
        {"08", "Lesser Poland (08)"},
        {"09", "Opole (09)"},
        {"0A", "Subcarpathia (0A)"},
        {"0B", "Podlachia (0B)"},
        {"0C", "Pomerania (0C)"},
        {"0D", "Silesia (0D)"},
        {"0E", "Świętokrzyskie (0E)"},
        {"0F", "Warmian-Masurian Voivodeship (0F)"},
        {"10", "Greater Poland (10)"},
        {"11", "Western Pomerania (11)"}
};

// 葡萄牙地区
State pt_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Lisbon (02)"},
        {"07", "Madeira (07)"},
        {"08", "Azores (08)"},
        {"09", "Aveiro (09)"},
        {"0A", "Beja (0A)"},
        {"0B", "Braga (0B)"},
        {"0C", "Bragança (0C)"},
        {"0D", "Castelo Branco (0D)"},
        {"0E", "Coimbra (0E)"},
        {"0F", "Évora (0F)"},
        {"10", "Faro (10)"},
        {"11", "Guarda (11)"},
        {"12", "Leiria (12)"},
        {"13", "Portalegre (13)"},
        {"14", "Porto (14)"},
        {"15", "Santarém (15)"},
        {"16", "Setúbal (16)"},
        {"17", "Viana do Castelo (17)"},
        {"18", "Vila Real (18)"},
        {"19", "Viseu (19)"}
};

// 罗马尼亚地区
State ro_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Bucharest (02)"},
        {"03", "Alba (03)"},
        {"04", "Arad (04)"},
        {"05", "Arges (05)"},
        {"06", "Bacau (06)"},
        {"07", "Bihor (07)"},
        {"08", "Bistrita-Nasaud (08)"},
        {"09", "Botosani (09)"},
        {"0A", "Braila (0A)"},
        {"0B", "Brasov (0B)"},
        {"0C", "Buzau (0C)"},
        {"0D", "Calarasi (0D)"},
        {"0E", "Caras-Severin (0E)"},
        {"0F", "Cluj (0F)"},
        {"10", "Constanta (10)"},
        {"11", "Covasna (11)"},
        {"12", "Dâmbovita (12)"},
        {"13", "Dolj (13)"},
        {"14", "Galati (14)"},
        {"15", "Giurgiu (15)"},
        {"16", "Gorj (16)"},
        {"17", "Harghita (17)"},
        {"18", "Hunedoara (18)"},
        {"19", "Ialomita (19)"},
        {"1A", "Iasi (1A)"},
        {"1B", "Ilfov (1B)"},
        {"1C", "Maramures (1C)"},
        {"1D", "Mehedinti (1D)"},
        {"1E", "Mures (1E)"},
        {"1F", "Neamt (1F)"},
        {"20", "Olt (20)"},
        {"21", "Prahova (21)"},
        {"22", "Salaj (22)"},
        {"23", "Satu Mare (23)"},
        {"24", "Sibiu (24)"},
        {"25", "Suceava (25)"},
        {"26", "Teleorman (26)"},
        {"27", "Timis (27)"},
        {"28", "Tulcea (28)"},
        {"29", "Vâlcea (29)"},
        {"2A", "Vaslui (2A)"},
        {"2B", "Vrancea (2B)"}
};

// 俄罗斯地区
State ru_states[] = {
        {"00", "Do not set (00)"},
        {"09", "Moscow City (09)"},
        {"0A", "Adygey (0A)"},
        {"0B", "Gorno-Altay (0B)"},
        {"0C", "Altay (0C)"},
        {"0D", "Amur (0D)"},
        {"0E", "Arkhangel'sk (0E)"},
        {"0F", "Astrakhan'"},
        {"10", "Bashkortostan (10)"},
        {"11", "Belgorod (11)"},
        {"12", "Bryansk (12)"},
        {"13", "Buryat (13)"},
        {"14", "Chechnya (14)"},
        {"15", "Chelyabinsk (15)"},
        {"16", "Chukot (16)"},
        {"17", "Chuvash (17)"},
        {"18", "Dagestan (18)"},
        {"19", "Ingushetia (19)"},
        {"1A", "Irkutsk (1A)"},
        {"1B", "Ivanovo (1B)"},
        {"1C", "Kabardin-Balkar (1C)"},
        {"1D", "Kaliningrad (1D)"},
        {"1E", "Kalmyk (1E)"},
        {"1F", "Kaluga (1F)"},
        {"20", "Kamchatka (20)"},
        {"21", "Karachay-Cherkess (21)"},
        {"22", "Karelia (22)"},
        {"23", "Kemerovo (23)"},
        {"24", "Khabarovsk (24)"},
        {"25", "Khakassia (25)"},
        {"26", "Khanty-Mansiy (26)"},
        {"27", "Kirov (27)"},
        {"28", "Komi (28)"},
        {"29", "Kostroma (29)"},
        {"2A", "Krasnodar (2A)"},
        {"2B", "Krasnoyarsk (2B)"},
        {"2C", "Kurgan (2C)"},
        {"2D", "Kursk (2D)"},
        {"2E", "Leningrad (2E)"},
{"2F", "Lipetsk (2F)"},
{"30", "Magadan (30)"},
{"31", "Mariy-El (31)"},
{"32", "Mordovia (32)"},
{"33", "Moscow (33)"},
{"34", "Murmansk (34)"},
{"35", "Nenets (35)"},
{"36", "Nizhegorod (36)"},
{"37", "Novgorod (37)"},
{"38", "Novosibirsk (38)"},
{"39", "Omsk (39)"},
{"3A", "Orenburg (3A)"},
{"3B", "Orel (3B)"},
{"3C", "Penza (3C)"},
{"3D", "Perm'"},
{"3E", "Primor'ye (3E)"},
{"3F", "Pskov (3F)"},
{"40", "Rostov (40)"},
{"41", "Ryazan'"},
{"42", "Sakha (42)"},
{"43", "Sakhalin (43)"},
{"44", "Samara (44)"},
{"45", "St. Petersburg (45)"},
{"46", "Saratov (46)"},
{"47", "North Ossetia (47)"},
{"48", "Smolensk (48)"},
{"49", "Stavropol'"},
{"4A", "Sverdlovsk (4A)"},
{"4B", "Tambov (4B)"},
{"4C", "Tatarstan (4C)"},
{"4D", "Tomsk (4D)"},
{"4E", "Tula (4E)"},
{"4F", "Tver'"},
{"50", "Tyumen'"},
{"51", "Tuva (51)"},
{"52", "Udmurt (52)"},
{"53", "Ul'yanovsk (53)"},
{"54", "Vladimir (54)"},
{"55", "Volgograd (55)"},
{"56", "Vologda (56)"},
{"57", "Voronezh (57)"},
{"58", "Yamal-Nenets (58)"},
{"59", "Yaroslavl'"},
{"5A", "Yevrey (5A)"},
{"5B", "Zabaykal'ye (5B)"}
};

// 塞尔维亚和科索沃地区
State rs_states[] = {
        {"01", "Serbia and Kosovo (01)"}
};

// 斯洛伐克地区
State sk_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Bratislava (02)"},
        {"03", "Banská Bystrica (03)"},
        {"04", "Košice (04)"},
        {"05", "Nitra (05)"},
        {"06", "Prešov (06)"},
        {"07", "Trencín (07)"},
        {"08", "Trnava (08)"},
        {"09", "Žilina (09)"}
};

// 斯洛文尼亚地区
State si_states[] = {
        {"01", "Slovenia (01)"}
};

// 南非地区
State za_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Gauteng (02)"},
        {"03", "Western Cape (03)"},
        {"04", "Northern Cape (04)"},
        {"05", "Eastern Cape (05)"},
        {"06", "KwaZulu-Natal (06)"},
        {"07", "Free State (07)"},
        {"08", "North West (08)"},
        {"09", "Mpumalanga (09)"},
        {"0A", "Limpopo (0A)"}
};

// 西班牙地区
State es_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Madrid (02)"},
        {"03", "Andalusia (03)"},
        {"04", "Aragon (04)"},
        {"05", "Principality of Asturias (05)"},
        {"06", "Balearic Islands (06)"},
        {"07", "Canary Islands (07)"},
        {"08", "Cantabria (08)"},
        {"09", "Castile-La Mancha (09)"},
        {"0A", "Castilla y León (0A)"},
        {"0B", "Catalonia (0B)"},
        {"0C", "Valencia (0C)"},
        {"0D", "Extremadura (0D)"},
        {"0E", "Galicia (0E)"},
        {"0F", "Murcia (0F)"},
        {"10", "Navarre (10)"},
        {"11", "Basque Country (11)"},
        {"12", "La Rioja (12)"},
        {"13", "Ceuta (13)"},
        {"14", "Melilla (14)"}
};

// 斯威士兰地区
State sz_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Hhohho (02)"},
        {"03", "Lubombo (03)"},
        {"04", "Manzini (04)"},
        {"05", "Shiselweni (05)"}
};

// 瑞典地区
State se_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Stockholm County (02)"},
        {"03", "Skåne County (03)"},
        {"04", "Västra Götaland County (04)"},
        {"05", "Östergötland County (05)"},
        {"06", "Södermanland County (06)"},
        {"07", "Värmland County (07)"},
        {"08", "Uppsala County (08)"},
        {"09", "Gävleborg County (09)"},
        {"0A", "Västerbotten County (0A)"},
        {"0B", "Norrbotten County (0B)"},
        {"0C", "Gotland Island (0C)"},
        {"0D", "Jämtland County (0D)"},
        {"0E", "Dalarna County (0E)"},
        {"0F", "Blekinge County (0F)"},
        {"10", "Örebro County (10)"},
        {"11", "Västernorrland County (11)"},
        {"12", "Jönköping County (12)"},
        {"13", "Kronoberg County (13)"},
        {"14", "Kalmar County (14)"},
        {"15", "Västmanland County (15)"},
        {"16", "Halland County (16)"}
};

// 瑞士地区
State ch_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Bern (02)"},
        {"04", "Aargau (04)"},
        {"05", "Basel-City (05)"},
        {"06", "Fribourg (06)"},
        {"07", "Geneva (07)"},
        {"08", "Glarus (08)"},
        {"09", "Graubünden (09)"},
        {"0A", "Jura (0A)"},
        {"0B", "Luzern (0B)"},
        {"0C", "Neuchâtel (0C)"},
        {"0D", "Obwalden (0D)"},
        {"0E", "St. Gallen (0E)"},
        {"0F", "Schaffhausen (0F)"},
        {"10", "Schwyz (10)"},
        {"11", "Solothurn (11)"},
        {"12", "Thurgau (12)"},
        {"13", "Ticino (13)"},
        {"14", "Uri (14)"},
        {"15", "Valais (15)"},
        {"16", "Vaud (16)"},
        {"17", "Zug (17)"},
        {"18", "Zurich (18)"},
        {"19", "Appenzell Outer Rhodes (19)"},
        {"1A", "Appenzell Inner Rhodes (1A)"},
        {"1B", "Basel-Landschaft (1B)"},
        {"1C", "Nidwalden (1C)"}
};

// 土耳其地区
State tr_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Ankara (02)"},
        {"03", "İstanbul (03)"},
        {"04", "İzmir (04)"},
        {"05", "Bursa (05)"},
        {"06", "Adana (06)"},
        {"07", "Gaziantep (07)"},
        {"08", "Konya (08)"},
        {"09", "Antalya (09)"},
        {"0A", "Diyarbakır (0A)"},
        {"0B", "Mersin (0B)"},
        {"0C", "Kayseri (0C)"},
        {"0E", "Şanlıurfa (0E)"},
        {"0F", "Malatya (0F)"},
        {"10", "Erzurum (10)"},
        {"11", "Samsun (11)"},
        {"12", "Van (12)"},
        {"13", "Kahramanmaraş (13)"},
        {"14", "Denizli (14)"},
        {"15", "Batman (15)"},
        {"16", "Elazığ (16)"},
        {"17", "Sakarya (17)"},
        {"18", "Kocaeli (18)"},
        {"19", "Sivas (19)"},
        {"1A", "Manisa (1A)"},
        {"1B", "Trabzon (1B)"},
        {"1C", "Balıkesir (1C)"},
        {"1D", "Adıyaman (1D)"},
        {"1E", "Tekirdağ (1E)"},
        {"1F", "Kırıkkale (1F)"},
        {"20", "Osmaniye (20)"},
        {"21", "Kütahya (21)"},
        {"22", "Çorum (22)"},
        {"23", "Isparta (23)"},
        {"24", "Aydın (24)"},
        {"25", "Hatay (25)"},
        {"26", "Mardin (26)"},
        {"27", "Aksaray (27)"},
        {"28", "Afyonkarahisar (28)"},
        {"29", "Tokat (29)"},
        {"2A", "Edirne (2A)"},
        {"2B", "Karaman (2B)"},
        {"2C", "Ordu (2C)"},
        {"2D", "Siirt (2D)"},
        {"2E", "Erzincan (2E)"},
        {"2F", "Çankırı (2F)"},
        {"30", "Zonguldak (30)"},
        {"31", "Yozgat (31)"},
        {"32", "Uşak (32)"},
        {"33", "Ağrı (33)"},
        {"34", "Amasya (34)"},
        {"35", "Ardahan (35)"},
        {"36", "Artvin (36)"},
        {"37", "Bartın (37)"},
        {"38", "Bayburt (38)"},
        {"39", "Bilecik (39)"},
        {"3A", "Bingöl (3A)"},
        {"3B", "Bitlis (3B)"},
        {"3C", "Bolu (3C)"},
        {"3D", "Burdur (3D)"},
        {"3E", "Çanakkale (3E)"},
        {"3F", "Düzce (3F)"},
        {"40", "Eskişehir (40)"},
        {"41", "Giresun (41)"},
        {"42", "Gümüşhane (42)"},
        {"43", "Hakkari (43)"},
        {"44", "Iğdır (44)"},
        {"45", "Karabük (45)"},
        {"46", "Kars (46)"},
        {"47", "Kastamonu (47)"},
        {"48", "Kilis (48)"},
        {"49", "Kırklareli (49)"},
        {"4A", "Kırşehir (4A)"},
        {"4B", "Muğla (4B)"},
        {"4C", "Muş (4C)"},
        {"4D", "Nevşehir (4D)"},
        {"4E", "Niğde (4E)"},
        {"4F", "Rize (4F)"},
        {"50", "Sinop (50)"},
        {"51", "Şırnak (51)"},
        {"52", "Tunceli (52)"},
        {"53", "Yalova (53)"}
};

// 英国地区
State gb_states[] = {
        {"00", "Do not set (00)"},
        {"02", "England (02)"},
        {"04", "Scotland (04)"},
        {"05", "Wales (05)"},
        {"06", "Northern Ireland (06)"}
};

// 赞比亚地区
State zm_states[] = {
        {"01", "Zambia (01)"}
};

// 津巴布韦地区
State zw_states[] = {
        {"01", "Zimbabwe (01)"}
};

// 阿塞拜疆地区
State az_states[] = {
        {"01", "Azerbaijan (01)"}
};

// 毛里塔尼亚地区
State mr_states[] = {
        {"01", "Mauritania (01)"}
};

// 马里地区
State ml_states[] = {
        {"01", "Mali (01)"}
};

// 尼日尔地区
State ne_states[] = {
        {"01", "Niger (01)"}
};

// 乍得地区
State td_states[] = {
        {"01", "Chad (01)"}
};

// 苏丹地区
State sd_states[] = {
        {"01", "Sudan (01)"}
};

// 厄立特里亚地区
State er_states[] = {
        {"01", "Eritrea (01)"}
};

// 吉布提地区
State dj_states[] = {
        {"01", "Djibouti (01)"}
};

// 索马里地区
State so_states[] = {
        {"01", "Somalia (01)"}
};

// 安道尔地区
State ad_states[] = {
        {"01", "Andorra (01)"}
};

// 直布罗陀地区
State gi_states[] = {
        {"01", "Gibraltar (01)"}
};

// 根西岛地区
State gg_states[] = {
        {"01", "Guernsey (01)"}
};

// 马恩岛地区
State im_states[] = {
        {"01", "Isle of Man (01)"}
};

// 泽西岛地区
State je_states[] = {
        {"01", "Jersey (01)"}
};

// 摩纳哥地区
State mc_states[] = {
        {"01", "Monaco (01)"}
};

// 台湾地区
State tw_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Taipei City (02)"},
        {"03", "Kaohsiung City (03)"},
        {"04", "Keelung City (04)"},
        {"05", "Hsinchu City (05)"},
        {"06", "Taichung City (06)"},
        {"07", "Chiayi City (07)"},
        {"08", "Tainan City (08)"},
        {"09", "New Taipei City (09)"},
        {"0A", "Taoyuan City (0A)"},
        {"0B", "HsinChu County (0B)"},
        {"0C", "Miaoli County (0C)"},
        {"0E", "Changhua County (0E)"},
        {"0F", "Nantou County (0F)"},
        {"10", "Yunlin County (10)"},
        {"11", "Chiayi County (11)"},
        {"14", "Pingtung County (14)"},
        {"15", "Yilan County (15)"},
        {"16", "Hualien County (16)"},
        {"17", "Taitung County (17)"},
        {"18", "Penghu County (18)"},
        {"19", "Kinmen County (19)"},
        {"1A", "Lienchiang County (1A)"}
};

// 韩国地区
State kr_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Seoul-teukbyeolsi (02)"},
        {"03", "Busan-gwangyeoksi (03)"},
        {"04", "Daegu-gwangyeoksi (04)"},
        {"05", "Incheon-gwangyeoksi (05)"},
        {"06", "Gwangju-gwangyeoksi (06)"},
        {"07", "Daejeon-gwangyeoksi (07)"},
        {"08", "Ulsan-gwangyeoksi (08)"},
        {"09", "Gyeonggi-do (09)"},
        {"0A", "Gangwon-do (0A)"},
        {"0B", "Chungcheongbuk-do (0B)"},
        {"0C", "Chungcheongnam-do (0C)"},
        {"0D", "Jeollabuk-do (0D)"},
        {"0E", "Jeollanam-do (0E)"},
        {"0F", "Gyeongsangbuk-do (0F)"},
        {"10", "Gyeongsangnam-do (10)"},
        {"11", "Jeju-teukbyeoljachido (11)"}
};

// 香港地区
State hk_states[] = {
        {"01", "Hong Kong (01)"}
};

// 新加坡地区
State sg_states[] = {
        {"01", "Singapore (01)"}
};

// 马来西亚地区
State my_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Kuala Lumpur (02)"},
        {"03", "Johor (03)"},
        {"04", "Kedah (04)"},
        {"05", "Kelantan (05)"},
        {"06", "Melaka (06)"},
        {"07", "Negeri Sembilan (07)"},
        {"08", "Pahang (08)"},
        {"09", "Perak (09)"},
        {"0A", "Perlis (0A)"},
        {"0B", "Penang (0B)"},
        {"0C", "Sarawak (0C)"},
        {"0D", "Selangor (0D)"},
        {"0E", "Terengganu (0E)"},
        {"0F", "Labuan (0F)"},
        {"10", "Sabah (10)"},
        {"11", "Putrajaya (11)"}
};

// 中国地区
State cn_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Beijing (02)"},
        {"03", "Chongqing (03)"},
        {"04", "Shanghai (04)"},
        {"05", "Tianjin (05)"},
        {"06", "Anhui (06)"},
        {"07", "Fujian (07)"},
        {"08", "Gansu (08)"},
        {"09", "Guangdong (09)"},
        {"0A", "Guizhou (0A)"},
        {"0B", "Hainan (0B)"},
        {"0C", "Hebei (0C)"},
        {"0D", "Heilongjiang (0D)"},
        {"0E", "Henan (0E)"},
        {"0F", "Hubei (0F)"},
        {"10", "Húnán (10)"},
        {"11", "Jiangsu (11)"},
        {"12", "Jiangxi (12)"},
        {"13", "Jilin (13)"},
        {"14", "Liaoning (14)"},
        {"15", "Qinghai (15)"},
        {"16", "Shanxi (16)"},
        {"17", "Shandong (17)"},
        {"18", "Shanxi (18)"},
        {"19", "Sichuan (19)"},
        {"1A", "Yunnan (1A)"},
        {"1B", "Zhejiang (1B)"},
        {"1D", "Guangxi-Zhuangzu (1D)"},
        {"1E", "Nei-Menggu (1E)"},
        {"1F", "Ningxia-huizu (1F)"},
        {"20", "Xinjiang-Weiwu'er-zu (20)"},
        {"21", "Xizang (21)"}
};

// 阿联酋地区
State ae_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Abu Dhabi (02)"},
        {"03", "Ajman (03)"},
        {"04", "Ash Shariqah (04)"},
        {"05", "Ras al-Khaimah (05)"},
        {"06", "Dubai (06)"},
        {"07", "Al Fujayrah (07)"},
        {"08", "Umm al Qaywayn (08)"}
};

// 印度地区
State in_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Delhi (02)"},
        {"03", "Andaman and Nicobar Islands (03)"},
        {"04", "Andhra Pradesh (04)"},
        {"05", "Assam (05)"},
        {"06", "Chandīgarh (06)"},
        {"07", "Dadra and Nagar Haveli (07)"},
        {"08", "Gujarāt (08)"},
        {"09", "Haryāna (09)"},
        {"0A", "Himachal Pradesh (0A)"},
        {"0C", "Kerala (0C)"},
        {"0D", "Lakshadweep (0D)"},
        {"0E", "Mahārāshtra (0E)"},
        {"0F", "Manipur (0F)"},
        {"10", "Meghālaya (10)"},
        {"11", "Karnātaka (11)"},
        {"12", "Nāgāland (12)"},
        {"13", "Odisha (13)"},
        {"14", "Puducherry (14)"},
        {"15", "Punjab (15)"},
        {"16", "Rājasthān (16)"},
        {"17", "Tamil Nadu (17)"},
        {"18", "Tripura (18)"},
        {"19", "West Bengal (19)"},
        {"1A", "Sikkim (1A)"},
        {"1C", "Mizoram (1C)"},
        {"1D", "Daman and Diu (1D)"},
        {"1E", "Goa (1E)"},
        {"1F", "Bihār (1F)"},
        {"20", "Madhya Pradesh (20)"},
        {"21", "Uttar Pradesh (21)"},
        {"22", "Chhattīsgarh (22)"},
        {"23", "Jharkhand (23)"},
        {"24", "Uttarakhand (24)"},
        {"25", "Other (25)"}
};

// 沙特阿拉伯地区
State sa_states[] = {
        {"00", "Do not set (00)"},
        {"02", "Ar Riyad (02)"},
        {"03", "Al Bahah (03)"},
        {"04", "Al Madinah (04)"},
        {"05", "Ash Sharqiyah (05)"},
        {"06", "Al Qasim (06)"},
        {"07", "'Asir (07)"},
        {"08", "Ha'il (08)"},
        {"09", "Makkah (09)"},
        {"0A", "Al Hudud ash Shamaliyah (0A)"},
        {"0B", "Najran (0B)"},
        {"0C", "Jizan (0C)"},
        {"0D", "Tabuk (0D)"},
        {"0E", "Al Jawf (0E)"}
};

// 圣马力诺地区
State sm_states[] = {
        {"01", "San Marino (01)"}
};

// 梵蒂冈地区
State va_states[] = {
        {"01", "Vatican City (01)"}
};

// 百慕大地区
State bm_states[] = {
        {"01", "Bermuda (01)"}
};


// 初始化国家的地区指针数组
StatesInfo all_states[] = {
// 日本
        {
                "JP",
                31,
                {
                        &jp_states[0], &jp_states[1], &jp_states[2], &jp_states[3], &jp_states[4],
                        &jp_states[5], &jp_states[6], &jp_states[7], &jp_states[8], &jp_states[9],
                        &jp_states[10], &jp_states[11], &jp_states[12], &jp_states[13], &jp_states[14],
                        &jp_states[15], &jp_states[16], &jp_states[17], &jp_states[18], &jp_states[19],
                        &jp_states[20], &jp_states[21], &jp_states[22], &jp_states[23], &jp_states[24],
                        &jp_states[25], &jp_states[26], &jp_states[27], &jp_states[28], &jp_states[29],
                        &jp_states[30]
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
                20,
                {
                        &ar_states[0], &ar_states[1], &ar_states[2], &ar_states[3], &ar_states[4],
                                                                                                   &ar_states[5], &ar_states[6], &ar_states[7], &ar_states[8], &ar_states[9],
                        &ar_states[10], &ar_states[11], &ar_states[12], &ar_states[13], &ar_states[14],
                        &ar_states[15], &ar_states[16], &ar_states[17], &ar_states[18], &ar_states[19]
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
                22,
                {
                        &co_states[0], &co_states[1], &co_states[2], &co_states[3], &co_states[4],
                                                                                                   &co_states[5], &co_states[6], &co_states[7], &co_states[8], &co_states[9],
                        &co_states[10], &co_states[11], &co_states[12], &co_states[13], &co_states[14],
                        &co_states[15], &co_states[16], &co_states[17], &co_states[18], &co_states[19],
                        &co_states[20], &co_states[21]
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
                18,
                {
                        &nz_states[0], &nz_states[1], &nz_states[2], &nz_states[3], &nz_states[4],
                                                                                                   &nz_states[5], &nz_states[6], &nz_states[7], &nz_states[8], &nz_states[9],
                        &nz_states[10], &nz_states[11], &nz_states[12], &nz_states[13], &nz_states[14],
                        &nz_states[15], &nz_states[16], &nz_states[17]
                }
        },
// 挪威
        {
                "NO",
                15,
                {
                        &no_states[0], &no_states[1], &no_states[2], &no_states[3], &no_states[4],
                                                                                                   &no_states[5], &no_states[6], &no_states[7], &no_states[8], &no_states[9],
                        &no_states[10], &no_states[11], &no_states[12], &no_states[13], &no_states[14]
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
                83,
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
                        &tr_states[80], &tr_states[81], &tr_states[82]
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
                26,
                {
                        &tw_states[0], &tw_states[1], &tw_states[2], &tw_states[3], &tw_states[4],
                                                                                                   &tw_states[5], &tw_states[6], &tw_states[7], &tw_states[8], &tw_states[9],
                        &tw_states[10], &tw_states[11], &tw_states[12], &tw_states[13], &tw_states[14],
                        &tw_states[15], &tw_states[16], &tw_states[17], &tw_states[18], &tw_states[19],
                        &tw_states[20], &tw_states[21], &tw_states[22], &tw_states[23], &tw_states[24],
                        &tw_states[25]
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
                33,
                {
                        &cn_states[0], &cn_states[1], &cn_states[2], &cn_states[3], &cn_states[4],
                                                                                                   &cn_states[5], &cn_states[6], &cn_states[7], &cn_states[8], &cn_states[9],
                        &cn_states[10], &cn_states[11], &cn_states[12], &cn_states[13], &cn_states[14],
                        &cn_states[15], &cn_states[16], &cn_states[17], &cn_states[18], &cn_states[19],
                        &cn_states[20], &cn_states[21], &cn_states[22], &cn_states[23], &cn_states[24],
                        &cn_states[25], &cn_states[26], &cn_states[27], &cn_states[28], &cn_states[29],
                        &cn_states[30], &cn_states[31], &cn_states[32]
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
                37,
                {
                        &in_states[0], &in_states[1], &in_states[2], &in_states[3], &in_states[4],
                                                                                                   &in_states[5], &in_states[6], &in_states[7], &in_states[8], &in_states[9],
                        &in_states[10], &in_states[11], &in_states[12], &in_states[13], &in_states[14],
                        &in_states[15], &in_states[16], &in_states[17], &in_states[18], &in_states[19],
                        &in_states[20], &in_states[21], &in_states[22], &in_states[23], &in_states[24],
                        &in_states[25], &in_states[26], &in_states[27], &in_states[28], &in_states[29],
                        &in_states[30], &in_states[31], &in_states[32], &in_states[33], &in_states[34],
                        &in_states[35], &in_states[36]
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

